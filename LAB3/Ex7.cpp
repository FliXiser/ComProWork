#include <iostream>
using namespace std;
int main(){
    double tkprice , height;
    cout << "Enter Ticket Price : "; cin >> tkprice;
    cout << "Enter Height (cm) : "; cin >> height;
    cout << "You are " << (height >= 150 ? "adult" : "kid") << endl;
    cout << "Total Price : " << (height >= 150 ? tkprice : tkprice / 2);
    return 0;
}