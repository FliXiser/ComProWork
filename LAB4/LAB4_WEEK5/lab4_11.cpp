#include <iostream>
using namespace std;
int main (){
    unsigned long sum = 0 ;
    int n, i = 1;
    cout << "Please enter value n to find summation of n*n : ";
    cin >> n;

    do{
        sum += i * i ;
        cout << i << " sum = " << sum << endl;
        i++;
    }while(i <= n);
    cout << "sum = " << sum << endl;
    return 0;
}