#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    string ID = "6906021410051";
    string Name = "Pongsaphak Neerapong";
    float Gpa = 4.00;
    short Age = 20;
    string Department = "Information Technology";
    string Room = "1RA"; // 1RA , 1DA
    cout << "Student Code : " << ID << endl;
    cout << "Student Name : " << Name << endl;
    cout << "Student Department : " << Department << endl;
    cout << "Student Room : " << Room << endl;
    cout << hex << "Student Age : " << Age << endl;
    cout << fixed << setprecision(2) << "Gpa : " << Gpa <<endl;
    return 0;
}