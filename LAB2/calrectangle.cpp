#include <iostream>
using namespace std;
int main(){
    int length , width ;
    cout << "Enter Length : "; cin >> length ;
    cout << "Enter Width : "; cin >> width ;
    cout << "Area of Rectangle = " << length * width << endl;
    cout << "Perimeter of Rectangle = " << (length + width) * 2 ;
    return 0;
}