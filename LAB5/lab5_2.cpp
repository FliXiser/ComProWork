#include <iostream>
using namespace std;

int main(){
    int intvalue;
    long longvalue;
    float floatvalue;
    string strvalue;

    cout << "Enter string number : "; cin >> strvalue;
    // convert string to numeric
    intvalue = atoi(strvalue.c_str());
    longvalue = atol(strvalue.c_str());
    floatvalue = atof(strvalue.c_str());
    cout << endl;

    cout << "Convert String to Numeric.\n";
    cout << "**************************\n";
    cout << "Convert to integer = " << intvalue << endl;
    cout << "Convert to long = " << longvalue << endl;
    cout << "Convert to float = " << floatvalue << endl;
    cout << endl;

    // init seed value to ronom
    srand(intvalue);
    cout << "Now random integer number 10 number:" << endl;
    cout << "***********************************" << endl;

    int vmin = 9999999 , vmax = 0;
    for (int N=1 , Num ; N<=100 ; N++){
        Num = rand();
        if(Num > vmax) vmax = Num;
        if(Num < vmin) vmin = Num;
        //cout << Num << " ";
        //if(Num%10==0) cout << endl;
    }
    cout << endl;
    cout << "min = " << vmin << endl;
    cout << "max = " << vmax << endl;
    return 0;
}

//ความสามารถของการสุ่มแบบนี้สุ่มได้แค่ min = 0 และ max = 32767 ถ้าอยากสุ่มมากกว่านี้ต้องใช้วิธีอื่น