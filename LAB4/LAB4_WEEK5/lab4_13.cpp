#include <iostream>
using namespace std;
int main(){
    int number , count;
    bool flag = true;

    do{
        cout << "\nInput number factorial(0-20?) : ";
        cin >> number;

        if((number >= 0) && (number <= 20))
            flag = false;
        else
            cout << "Number value over limit.\n";

    }while(flag);

    
    if (number >= 0){
        long Fac = 1;
        count = 1;
        while (count <= number) 
        Fac *= count++;
        cout << "\nFactorial of " << number << " = " ;
        cout << Fac << endl;
    }
    return 0;
}