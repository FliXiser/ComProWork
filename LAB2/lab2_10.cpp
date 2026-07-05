#include <iostream>
#include <string>
using namespace std;
int main(){
    string Id , Name , Surname;
    int Age;
    /*input*/
    cout << "Enter ID : "; cin >> Id;
    cout << "Enter name : "; 
    //cin >> Name >> Surname;
    cin.ignore(); // ก่อนจะ getline ต้อง cin.ignore ก่อน
    getline(cin,Name);
    cout << "Enter age : "; cin >> Age;
    /*output*/
    cout << "\nHello, " << Name << "." << endl;
    cout << "You have " << Age << "year old." << endl;
    cout << "You are beginner programmer." << endl;
    return 0;
}