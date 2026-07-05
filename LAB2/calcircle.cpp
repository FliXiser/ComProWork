#include <iostream>
#define PI 3.1415
using namespace std;
int main(){
    float radius , area , circum;
    cout << "Program Calculate Area Circle." << endl;
    cout << "Circle radius (real number) ? "; cin >> radius;
    cout << "\n";
    
    area = PI * radius * radius;
    cout << "Area of circle with radius " << radius << " is " << area << endl;
       
    circum = 2 * PI * radius;
    cout << "Circumference is " << circum <<endl;
    return 0;
}