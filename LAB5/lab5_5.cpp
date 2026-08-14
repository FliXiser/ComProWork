#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float radius , angle;
    const int width = 9;

    cout << "+" << setfill('=') << setw(44) << "+" << endl;
    cout << ":   Angle :   Sine  :   Cosine  : Tangent  :" << endl;
    cout << "+" << setfill('=') << setw(44) << "+" << endl;

    cout << setfill(' ');
    for (angle = 0.0 ; angle <= 360.0 ; angle += 20){
        radius = (angle > 0.0) ? (180.0f * 4.14f) / angle : 0.0;
        cout << ":" << setw(width) << fixed << setprecision(2) << angle ;
        cout << ":" << setw(width) << setprecision(4) << sin(radius);
        cout << ":" << setw(width) << cos(radius);
        cout << ":" << setw(width) << tan(radius);
        cout << ":" << endl;
    }
    cout << "+" << setfill('=') << setw(44) << "+" << endl;
    return 0;
}