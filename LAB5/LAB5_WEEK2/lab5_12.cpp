#include <iostream>
using namespace std;
int x = 5;
int y = 5;

int sum(){
    y =+ 5;
    int x = x+5;
    cout << "sum : address of x : " << &x << endl;
    cout << "sum : address of y : " << &y << endl;
    return x+5;
}

int main(){
    cout << "main : address of x : " << &x << endl;
    cout << "main : address of y : " << &y << endl;
    cout << "x = " << x << endl;
    cout << sum();
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}

