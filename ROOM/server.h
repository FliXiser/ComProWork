#pragma once
#include "Net.h"
#include <ws2tcpip.h>
#include <iostream>

class Server{
    SOCKET serverSocket = INVALID_SOCKET;
    SOCKET player[2] = { INVALID_SOCKET , INVALID_SOCKET };
    string name[2];
    bool winsocketStartrd = false;

    public :
    void showServerIP(int port){
        char hostname[256]{};
        addrinfo hints{}, *result = nullptr;
        cout << "\n== CPP BATTLE ROYAL SERVER ==\n";
        cout << "Port :" << port << '\n';
        if(gethostname(hostname, sizeof(hostname))!=0){
            cout << "Cannot get IP\n";
            return;
        }
        hints.ai_family = AF_INET;
        hints.ai_socktype = SOCK_STREAM;
        if(getaddrinfo(hostname , nullptr , &hints , &result)!=0){
            cout << "Cannot find LAN IP \n";
            return;
        }
        bool found = false;
        for(auto p = result; p; p=p->ai_next){
            auto addr = (sockaddr_in*)p->ai_addr;
            unsigned long ip = ntohl(addr->sin_addr.s_addr);
            if((ip>>24)==127) continue;
            char text[INET_ADDRSTRLEN]{};
            inet_ntop(AF_INET , &addr->sin_addr, text, sizeof(text));
            cout << "Join IP : " << text << '\n';
            found = true; 
        }
        freeaddrinfo(result);
        if(!found) cout << "LAN IP not found\n";
        cout << "===========\n";
    }
    bool start(int port=5400){
        WSADATA wsa;
        if(WSAStartup(MAKEWORD(2,2),&wsa)!=0) return false;
        winsocketStartrd = true;
        serverSocket = socket(AF_INET , SOCK_STREAM , 0);
        if(serverSocket==INVALID_SOCKET) return false;
        sockaddr_in addr{};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(port);
        addr.sin_addr.s_addr = INADDR_ANY;
        if(bind(serverSocket, (sockaddr*)&addr,sizeof(addr))==SOCKET_ERROR)
            return false;
        if(listen(serverSocket,2)==SOCKET_ERROR) return false;
        cout << "Server listening on port " << port << "\n";
        return true;
    }

    bool waitPlayer(){
        for(int i=0;i<2;i++){
            cout << "Waiting for player" << i+1 << "...\n";
            player[i] = accept(serverSocket , nullptr , nullptr);
            if(player[i]==INVALID_SOCKET) return false;
            name[i] = receiveText(player[i]);
            if(name[i].empty()){
                cout << "Invalid player name or disconnect.\n";
                return false;
            }
            cout << name[i] << "joined the party!\n";
            setText(player[i], "JOINED : "+name[i]);
            if(i==0) setText(player[i], "Waiting for Players");
        }

        string party = "PARTY : " + name[0] + "," + name[1];
        for(int i=0 ; i<2 ; i++){
            setText(player[i], "Player joined : " + name[1]);
            setText(player[i], "Party Ready");
            setText(player[i], party);
        }
        cout << "== Party Ready ==\n";
        cout << "[1] " << name[0] << '\n';
        cout << "[2] " << name[1] << '\n';
        cout << "Waiting for Battle..\n";
        return true;
    }

    void stop(){
        for(auto& p : player){
            if(p != INVALID_SOCKET){
                shutdown(p, SD_BOTH);
                closesocket(p);
                p = INVALID_SOCKET;
            }
        }
        if(serverSocket != INVALID_SOCKET){
            closesocket(serverSocket);
            serverSocket = INVALID_SOCKET;
        }
        if(winsocketStartrd){
            WSACleanup();
            winsocketStartrd = false;
        }
    }

    ~Server(){ stop(); }
};