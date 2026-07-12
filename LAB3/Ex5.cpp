#include <iostream>
using namespace std;
int main(){
    int num;
    int num1 , num2 , num3 , num4;
    int decimal;
    cout << "Enter binary number : " ; cin >> num;
    if (num >= 1000 && num <= 9999){

            num1 = num / 1000;
            num2 = (num % 1000) / 100;
            num3 = (num % 100) / 10;
            num4 = num % 10;

        if ((num1 == 0 || num1 == 1) &&
        (num2 == 0 || num2 == 1) &&
        (num3 == 0 || num3 == 1) &&
        (num4 == 0 || num4 == 1)){
            
            decimal = num1 * 8 + num2 * 4 + num3 * 2 + num4 * 1;
            cout << "Decimal value of " << num << " = " << decimal;
        }else{
            cout << "Please Enter Binary Number";
        } 
    }else{
        cout << "Please Enter 4 Digits Number";
    }
    return 0;
}