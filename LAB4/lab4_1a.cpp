#include <iostream>
using namespace std;
int main(){
    string first_name;
    string* address = &first_name;

    cout << "Please enter your firstname : "; cin >> first_name;
    cout << "Hello, " << first_name << "!\n";

    cout << "Stored at address : " << &first_name << "\n";
    cout << "Value from address : " << *address << "\n";
    return 0;
}