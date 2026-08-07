#include <iostream>
using namespace std;
int main(){
    int num , value , sum;
    bool flag = true;
    num = 1 ;
    sum = 0 ;

    do{
        cout << "Enter value " << num << " : ";
        cin >> value;
        if (value > 0){
            sum += value;
            num++;
        }
        else flag = false;
    }while (flag == true);

    if (num > 1){
        float avg;
        avg = static_cast<float>(sum) / --num;
        cout << "Average of data = " << avg << endl;
    }
    else cout << "No data input." << endl;
    return 0;
}