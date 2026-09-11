#include <iostream>
#include <iterator>
using namespace std;
int main(){
    int A[5] = {16,12,6,8,14};
    char B[] = {'A','E','I','O','U'};
    float C[10];

    // sizeAแดงเพราะไม่ใช่ c++17
    cout << "Address A : " << &A << " Size = " << size(A) << endl;
    cout << "size of " << sizeof(A)/sizeof(A[0]) << endl;
    for (int i = 0; i < size(A); i++){
        cout << i << "Address = " << &A[i] << " Value = " << A[i] << endl;
    }

    cout << "Address A : " << &B << " Size = " << size(B) << endl;
    cout << "size of " << sizeof(B)/sizeof(B[0]) << endl;
    for (int i = 0; i < size(B); i++){
        cout << i << "Address = " << (&B+1) << " Value = " << B[i] << endl;
    }

    // for(int i = 0; i < size(C) ; i++){
    //     cout << i << "Address = " << &C[i] << " Value";
    // }
    return 0;
}