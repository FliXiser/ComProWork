#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int Menu();
void AddStudent(string FN);
void DisplayStudent(string FN);
int main(){
    const string Filename = "student.dat";
    ifstream InFile;
    ofstream OutFile;
    int c;
    do{
        system("cls"); 
        c = Menu();
        switch (c){
            case 1:    AddStudent(Filename);    break;
            case 2:    DisplayStudent(Filename);    break;
        }
    } while (c != 0);
    cout << "Exit program." << endl;
    return (0);
}

int Menu(){
    string line(25, '=');
    int Choose;
    cout << "Program Add-Display Student Data\n";
    cout << line << endl;
    cout << ": Main Menu :\n";
    cout << line << endl;
    cout << ": 0 - Exit :\n";
    cout << ": 1 - Add Student :\n";
    cout << ": 2 - Display Student Data :\n";
    cout << line << endl;
    cout << " Enter choose : ";
    cin >> Choose;
    return (Choose);
}

void AddStudent(string FN){
    ofstream OutFile(FN.c_str(), ios_base::out | ios_base::app);
    if (OutFile.is_open()){
        string Id, Name;
        cout << "\n Add Student \n";
        cout << "Enter id : ";        cin >> Id;
        cout << "Enter name : ";      cin >> Name;

        OutFile << Id << " " << Name << endl;
        OutFile.close();
        char Wait;
        cin.get(Wait);
        cout << "\nSaved already ,Press Enter to continue";
        cin.get(Wait);
    }
    else
        cout << "File could not opened." << endl;
}

void DisplayStudent(string FN){
    ifstream InFile(FN.c_str(), ios_base::in);

    if (InFile.is_open()){
        string Id, Name;
        string line(30, '=');
        int n = 0;
        cout << "\nList Student\n";
        cout << line << endl;
        cout << right << setw(5) <<  " No. "  << left << setw(8) << " Id" << " " << "Name\n";
        cout << line << endl;


        InFile >> Id >> Name;
        while (!InFile.eof()){
            n = n + 1;
            cout << right << setw(3) << n << " : ";
            cout << left << setw(6) << Id;
            cout << " " << Name << endl;
            InFile >> Id >> Name;
        }
        InFile.close();
        char Wait;
        cin.get(Wait);
        cout << "\nPress Enter to continue";
        cin.get(Wait);
    }
    else
        cout << "File could not opened." << endl;
}