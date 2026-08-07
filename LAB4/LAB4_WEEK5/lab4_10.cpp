#include <iostream>
using namespace std;
int main(){
    int ListSize = 5;
    int valuesprocessed = 0;
    float valuesum = 0;
    cout << "Please enter " << ListSize << "numbers" << endl ;
    while(valuesprocessed < ListSize){
        float value ;
        cin >> value ;
        valuesum += value;
        ++valuesprocessed;
    }
    float average = valuesum / valuesprocessed;
    cout << "Average :" << average << endl;
    return 0;
}