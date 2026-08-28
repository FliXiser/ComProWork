#include <iostream>
using namespace std;

void calculateRectangle(double width , double height , double & area ,
double &perimeter){
    area = width * height;
    perimeter = 2 * (width + height);
}

int main(){
    double w =  5.0 , h = 3.0;
    double myArea = 0 , myPerimeter = 0;

    calculateRectangle(w,h,myArea,myPerimeter);
    cout << "Width : " << w << ", Height : " << h << endl;
    cout << "Calculated Area : " << myArea << endl;
    cout << "Calculated Perimeter : " << myPerimeter << endl;
    return 0;
}

