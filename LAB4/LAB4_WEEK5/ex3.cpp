#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch;
    int upper = 0, lower = 0, numeric = 0, space = 0, special = 0;

    cout << "Enter message : ";

    while((ch = cin.get()) != '\n'){
        if(ch >= 'A' && ch <= 'Z')
            upper++;
        else if(ch >= 'a' && ch <= 'z')
            lower++;
        else if(ch >= '0' && ch <= '9')
            numeric++;
        else if(ch == ' ')
            space++;
        else
            special++;
    }

    cout << "Your message has " << upper << " upper characters." << endl;
    cout << "Your message has " << lower << " lower characters." << endl;
    cout << "Your message has " << numeric << " numeric characters." << endl;
    cout << "Your message has " << space << " space characters." << endl;
    cout << "Your message has " << special << " special characters." << endl;

    return 0;
}