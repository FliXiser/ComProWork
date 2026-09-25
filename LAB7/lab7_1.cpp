#include <iostream>
#include <fstream>
#include <iomanip>
#include <time.h>

using namespace std;

int main(){
    string FileName;
    ifstream InFile;
    ofstream OutFile;
    int Value;

    srand(time(0));
    cout << "Enter file name : "; cin >> FileName;
    cout << endl;

    OutFile.open(FileName.c_str());
    cout << "Now open file " << FileName << " for write" << endl;

    for(int n = 1; n<= 10; n++){
        Value = rand() % 100;
        cout << setw(5) << Value;

        OutFile << Value << " ";
    }
    cout << endl;
    OutFile.close();
    cout << "Now close file " << FileName << ".\n\n";
    InFile.open(FileName.c_str());
    cout << "Now open file " <<  FileName << "for read." << endl;

    for(int n=1; n<=10; n++){
        InFile >> Value;
        cout << setw(5) << Value;
    }

    cout << endl;
    InFile.close();
    cout << "Now close file" << FileName << ".\n\n";
    return 0;
}

