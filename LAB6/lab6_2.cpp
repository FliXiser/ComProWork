#include <iostream>
using namespace std;
int main(){
    int Square[10], i = 5;

    for (int i = 0; i < 10; i++){
    cout << "i = " << i << " ";
    Square[i] = i*i;
    cout << Square[i] << endl;
    }
    cout << "last i = " << i << endl; 
    return 0;
}
