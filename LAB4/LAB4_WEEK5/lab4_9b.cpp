#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << "Display square of number 1 to 10.\n";
    cout << "=====================================";
    cout << "\tX\tX^2\n";
    cout << "=====================================";
    int x =1;
    cout << setfill('*');;
    while (x <= 10){
        cout << "\t" << setw(3) << x << "\t" << setw(3) << x*x << endl;
        x++;
    }
    return 0;
}