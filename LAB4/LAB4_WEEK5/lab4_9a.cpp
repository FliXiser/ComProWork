#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int digit = 0 ;
    cout << right << setfill(' ') << "digit = ";
    while(digit<=9){
        cout << setw(2)<< digit << " ";
        digit++;
    }
    cout << ":" << digit << endl;

    digit = 20 ;
    cout << right << setfill(' ') << "digit = ";
    while(digit > 10){
        cout << digit << " ";
        digit--;
    }
    cout << ":" << digit << endl;
    return 0;
}
