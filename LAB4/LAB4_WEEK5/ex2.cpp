#include <iostream>
using namespace std;
int main(){
    int numline;
    string apb;
    cout << "Input number line : "; cin >> numline;
    cout << "Input character : "; cin >> apb; //apb = alphabet
    
    if (numline > 0 && numline <= 20){
        for (int i = 0 ; i <= numline; i++){
        for (int x = 1 ; x <= i ; x++){
            cout << apb;
            }
            cout << endl;
        }
    }
    
    return 0;
}