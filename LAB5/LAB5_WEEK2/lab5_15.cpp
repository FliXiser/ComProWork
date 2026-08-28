#include <iostream>
using namespace std;

int Summation(int StartNumber=1 , int EndNumber=10);

int main(){
    int Start , End;
    cout << "Enter start number : "; cin >> Start;
    cout << "Enter end number : "; cin >> End;
    cout << endl;

    cout << "summation of Number " << Start << " to " << End;
    cout << " = " << Summation(Start , End) << endl;
    cout << "summation of Number " << 5 << " to " << 10;
    cout << " = " << Summation(5) << endl;
    cout << "summation of Number " << 1 << " to " << 10;
    cout << " = " << Summation() << endl;
    return 0;
}

int Summation(int StartNumber , int EndNumber){
    int Sum = 0;
    for (int N = StartNumber ; N < EndNumber ; N++){
        Sum += N;
        if(N==2)
        return Sum;
    }
}
