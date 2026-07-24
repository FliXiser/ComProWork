#include <iostream>
using namespace std;
int main(){
    char choice;
    cout << "Enter [R,W,B,G] : "; cin >> choice;
    // toupper = autu upper chr
    switch(toupper(choice)){
        case 'R' : cout << "RED"; break;
        case 'W' : cout << "WHITE"; break;
        case 'B' : cout << "BLUE"; break;
        case 'G' : cout << "GREEN"; break;
        default : cout << "I don't know.";
    }
    return 0;
}