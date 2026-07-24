#include <iostream>
using namespace std;
int main(){
    int LeftOperand , RightOperand;
    char Operator;
    int Result;

    cout << "Please enter a simple expression" ;
    cout << "(number operator number) : ";
    cin >> LeftOperand >> Operator >> RightOperand;

    if(Operator == '+') Result = LeftOperand + RightOperand;
        else if (Operator =='-') Result = LeftOperand - RightOperand; 
        else if (Operator =='*') Result = LeftOperand * RightOperand; 
        else if (Operator =='/') Result = LeftOperand / RightOperand;
        else{
        cout << Operator << " is unrecognized operation.";
        return 1;
        }
    cout << LeftOperand << " " << Operator << " ";
    cout << RightOperand << " equals " << Result << endl;
    return 0;
}
