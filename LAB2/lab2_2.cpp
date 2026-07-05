#include <iostream>
#include <unistd.h> // คำสั่งที่ทำให้มีแต่งเลขจำนวนเต็มไม่มีทศนิยม
#include <string>
using namespace std;
int main(){
    string name = "Pongsaphak Neerapong";
    for (int i = 0; i < name.length(); i++){
        cout << "\r";
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        cout << name[i];
        sleep(1);
    }
    cout << "\r" << name << endl;
    return 0;
}
