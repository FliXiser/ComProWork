#include <iostream>
#include <fstream>
using namespace std;
void DeleteData(int id);
void EditData(int id , int newid);
int main(){

    DeleteData(14);
    EditData(15 , 25);

    return 0;
}

void DeleteData(int id){
    ifstream in("data.text");
    ofstream out("temp.text");

    int x;
    while(in >> x){
        if(x != id) out << x << " ";
    }

    in.close();
    out.close();
}

void EditData(int id , int newid){
    ifstream in("data.txt");
    ofstream out("temp.txt");

    int x;
    while(in >> x){
        if(x != id) out << x << " ";
        else out << id << " ";
    }

    in.close();
    out.close();
}