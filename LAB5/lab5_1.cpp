#include <iostream>
#include <string>
using namespace std;

int main(){
    char ch;
    string message;
    cout << "Enter character : "; cin >> ch;
    cout << "Current character is " << ch << endl;

    if(isalnum(ch)){
        if(isalpha(ch)){
            if(islower(ch)){
                message = "lower character";
                cout << "'" << ch << "' convert to lower "
                << "'" << (char)toupper(ch) << "'" << endl;
            }else{
                message = "upper character";
                cout << "'" << ch << "' convert to lower "
                << "'" << (char)tolower(ch) << "'" << endl;
            }
        }
            else if (isdigit(ch))
                message = "digit.";
    }
    else
    message = "special character";
    cout << "\'" << ch << "\'" << "is" << message << endl;
    if(isalpha(ch)){
        if(islower(ch)){
            
            cout << (char)tolower(ch) << "\'";
        }
        cout << endl;
    }
    return 0;
}
