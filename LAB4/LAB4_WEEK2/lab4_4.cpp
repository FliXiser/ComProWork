#include <iostream>
using namespace std;
int main(){
    int LeftOperand , RightOperand;
    char Operator;
    int Result;

    cout << "Please enter a simple expression" ;
    cout << "(number operator number) : ";
    cin >> LeftOperand >> Operator >> RightOperand;

    switch (Operator){
        case '+' : Result = LeftOperand + RightOperand; break;
        case '-' : Result = LeftOperand - RightOperand; break;
        case '*' : Result = LeftOperand * RightOperand; break;
        case '/' : Result = LeftOperand / RightOperand; break; 
        default : cout << Operator << " is unrecognized operation.";
        cout << endl;
        return 1;
    }

    cout << LeftOperand << " " << Operator << " ";
    cout << RightOperand << " equals " << Result << endl;
    return 0;
}