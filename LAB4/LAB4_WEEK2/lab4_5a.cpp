#include <iostream>
using namespace std;
int main(){
    char Choice;
    float Area;

    for(;;){
    cout << " Program Calculate Area " << endl;
    cout << " 1. Circle" << endl;
    cout << " 2. Rectangle" << endl;
    cout << " 3. Exit" << endl;
    cout << "Enter your choos number : "; cin >> Choice;

    //if
    switch ( Choice ){
        case '1' :
        float Radius;
        cout << "\nEnter radius : "; cin >> Radius;
        Area = 3.14159F * Radius * Radius;
        cout << "Area of Circle = " << Area << endl;
        break;

    // }else if (Choice == '2'){
    case '2':
        float Length , Width;
        cout << "Enter length and width : "; cin >> Length >> Width;
        Area = Length * Width;
        cout << "Area of Rectngle = " << Area << endl;
        break;

    // }else if(Choice == '3')
    case '3' :
        cout << "\n. . . Exit Program . . .\n";
        exit(0);
        break;

    default : 
    cout << "\nYou choose out of range is not process.\n";
    break;

        }
    }
return 0;
}