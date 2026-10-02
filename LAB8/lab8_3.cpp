#include <iostream>
#include "time.h"
using namespace std;
int main(){
    Time t1;
    int h,m,s;
    cout << "Enter hour : ";
    cin >> h;
    cout << "Enter minutes : ";
    cin >> m;
    cout << "Enter second : ";
    cin >> s;
    t1 = Time(h,m,s);

    cout << "This Time is " 
         << t1.getHours() << ":"
         << t1.getMinute() << ":"
         << t1.getSecond() << endl;
    return 0;
}
