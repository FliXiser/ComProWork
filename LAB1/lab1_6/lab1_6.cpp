#include <iostream>
#include "lib.h"
using namespace std;
 int main(){
    int num1 , num2;
    cout << "Enter Num1 :"; cin >> num1;
    cout << "Enter Num2 :"; cin >> num2;
    cout << num1 << "+" << num2 << "=" << sum(num1 , num2);
    return 0;
}