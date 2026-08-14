#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double value;
    cout << "Enter floating number : "; cin >> value;
    cout << endl;

    cout << "\nCeiling of" << value << " is " << ceil(value);
    cout << "\nFloor of" << value << " is " << floor(value);
    cout << "\nSquare of" << value << " is " << sqrt(value);
    cout << "\nExponential of" << value << " is " << exp(value);

    cout << "\nFloating absolute of " << value << " is ";
    cout << fabs(value);
    cout << "\nNatural logarithm of " << value << " is ";
    cout << log(value);
    cout << "\nLogarithm(10 base) absolute of " << value << " is ";
    cout << log10(value);
    cout << "\nPower three absolute of " << value << " is ";
    cout << pow(value,3);

    cout << "\nSin of " << value << " is " << sin(value);
    cout << "\nCosine of " << value << " is " << cos(value);
    cout << "\nTangent of " << value << "is" << tan(value);
    cout << endl;
    return 0;
}