#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void GetandWrite(ofstream &OutFile);
void ReadandDisplay(ifstream &InFile);

int main(){

    string Filename;
    ifstream InFile;
    ofstream OutFile;

    cout << "Enter file name :";
    cin >> Filename;
    cout << endl;

    OutFile.open(Filename.c_str());
    cout << "Now open file " << Filename << " for write." << endl;
    GetandWrite(OutFile);
    OutFile.close();

    cout << "Now close file " << Filename << ".\n\n";

    InFile.open(Filename.c_str());
    cout << "Now open file " << Filename << " for read." << endl;
    ReadandDisplay(InFile);
    InFile.close();

    cout << "Now close file " << Filename << ".\n\n";

    return (0);
}

void GetandWrite(ofstream &OutFile){

    string Id, Name, SurName;

    int Score;

    for (int n = 1; n <= 3; n++){

        cout << "\nStudent No. " << n << endl;
        cout << "Enter Id : ";
        cin >> Id;

        cout << "Enter Name : ";
        cin >> Name;

        cout << "Enter SurName : ";
        cin >> SurName;

        cout << "Enter Score :";
        cin >> Score;

        OutFile << Id << " " << Name << " ";
        OutFile << SurName << " " << Score << endl;
    }

    cout << endl;
}

void ReadandDisplay(ifstream &InFile){

    string Id, Name, SurName;

    int Score;

    for (int n = 1; n <= 3; n++){

        InFile >> Id >> Name >> SurName >> Score;

        cout << "ID : " << Id << "Name : " << Name << " " << SurName << endl;
        cout << "Score : " << Score << endl;
    }

    cout << endl;
}