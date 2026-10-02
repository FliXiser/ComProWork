#include "std.h"
int main(){
    Student s1("Somchai" , "S001");
    Student s2("Somsri" , "S002");
    s1.displayinfo();

    ClassRoom* room101 = new ClassRoom("CS101");
    room101->addStudent(&s1);
    room101->addStudent(&s2);
    room101->showClassList();
    cout << "after" << endl;
    delete room101;
    room101 = nullptr;
    room101->showClassList();
    s1.displayinfo();

    return 0;
}