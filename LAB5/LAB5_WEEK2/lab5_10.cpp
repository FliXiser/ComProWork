#include <iostream>
using namespace std;

void passByValue(int num){
    num = 100;
}

void passByReference(int &num){
    num = 100;
}

int main(){
    int a = 10 , b = 10;

    cout << "bf : Value of a : " << a << endl;
    passByValue(a);
    cout << "af : Value of a : " << a << endl;

    cout << "bf : Value of b : " << b << endl;
    passByReference(b);
    cout << "af : Value of b : " << b << endl;
    return 0;
}

