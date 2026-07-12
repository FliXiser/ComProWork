#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter number : " ; cin >> num;
    if (num >= 1000 && num <= 9999){
        cout << num / 1000 << "   ";
        cout << (num % 1000) / 100 << "   ";
        cout << (num % 100) / 10 << "   ";
        cout << num % 10 << endl;
    }else{
        cout << "Please Enter 4 Digits Number";
    }
    
    return 0;
}