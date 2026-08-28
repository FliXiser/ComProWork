#include <iostream>
#include <iomanip>
using namespace std;

void DisplayMenu();
float Area(const float Radius);
float Area(const float Lenght , const float Width);

int main(){
    char Choice;
    bool flag = true;
    do{
        DisplayMenu();
        cin >> Choice;
        if(Choice == '1'){
            float Radius;
            cout << "Enter radius : "; cin >> Radius;
            cout << "Area of Circle = " << fixed << setprecision(2) << Area(Radius) << endl;
        }else if (Choice == '2'){
            
        }
    }
    return 0;
}

float Area(const float Radius){
    return (3.14159f * Radius * Radius);
}

float Area(const float Lenght , const float Width){
    return (Lenght * Width);
}

void Dislplay(){
    cout <<  endl;
    cout << "Program Calculate Area"
    cout << ""
    cout << ""
    cout << ""
    cout << ""
}

