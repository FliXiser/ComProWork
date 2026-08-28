#include <iostream>
using namespace std;

void ParseName(string &FirstName , string &LastName , const string FullName);

int main(){
    string Name = "Stroustrup, Bjame";
    string LastName , FirstName;
    ParseName(FirstName,LastName,Name);
    Name = FirstName + " " + LastName;
    cout << "Name : " << Name << endl;
    return 0;
}

void ParseName(string &FirstName , string &LastName , const string FullName){
    int l = FullName.find(",");
    LastName = FullName.substr(0,l);
    FirstName = FullName.substr(l+2 , FullName.size());
}
