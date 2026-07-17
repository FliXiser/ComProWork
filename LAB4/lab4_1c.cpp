#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a , b , c;
    cout << "Enter thelengths of the two sides adjacent to the right angle\n";
    cout << "(a b) : " ; cin >> a >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    cout << "Hypotenuse = " << c << "\n";
    cout << "======================================================================";
    return 0;

}