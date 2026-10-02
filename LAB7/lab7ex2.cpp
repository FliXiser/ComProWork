#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int Menu();
void AddData(string Filename);
void ChangeName(string Filename);

int main(){

    const string Filename = "StudentScore.txt";

    int c;
    do{
        system("cls"); 
        c = Menu();

        switch (c){
            case 1: AddData(Filename); break;

            case 2: ChangeName(Filename); break;
        }

    } while (c != 0);
    cout << "Exit program." << endl;
    return 0;
}

int Menu(){
    int Choose;

    cout << ": Main Menu :" << endl;

    cout << "[1] - Add Data" << endl;
    cout << "[2] - Change Name By Name" << endl;
    cout << "[0] - Exit" << endl;

    cout << "Enter choose : ";
    cin >> Choose;

    return Choose;
}

void AddData(string Filename){

    ofstream OutFile(Filename, ios::app);
    string Name;
    int Score;

    cin.ignore();

    cout << "Enter name : ";
    getline(cin, Name);

    cout << "Enter Score : "; cin >> Score;

    OutFile << Name << "," << Score << endl;

    OutFile.close();
}

void ChangeName(string Filename){

    ifstream InFile(Filename);
    ofstream OutFile("Temp.txt");
    string FindName;
    string NewName;
    string Name;
    int Score;

    cin.ignore();

    cout << "FindName : ";
    getline(cin, FindName);

    cout << "New Name : ";
    getline(cin, NewName);

    while (getline(InFile, Name, ',')){
        InFile >> Score;
        InFile.ignore();
        if (Name == FindName){
            OutFile << NewName << "," << Score << endl;
        }
        else{
            OutFile << Name << "," << Score << endl;
        }
    }

    InFile.close();
    OutFile.close();

    remove(Filename.c_str());
    rename("Temp.txt", Filename.c_str());
}