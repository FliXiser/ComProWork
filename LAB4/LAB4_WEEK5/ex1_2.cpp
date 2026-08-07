#include <iostream>
using namespace std;
string cal_grade(int score);
int main(){
    int choice;
    do{
        cout << "Cal Grade Demo 1\n";
        cout << "1: test function\n";
        cout << "Please Enter Your choice [1,2,3]";
        cin >> choice;
        if(choice == 1){
            for(int i=-2 ; i<=102 ; i++){
                if(i>0&&i<=100)
                if(i%5==0) cout << endl;
                cout << "Score " << i << "=" << cal_grade(i) << "\t";
            }else{
                cout << "\nError Score " << i << "out of range \n";
            }
        }
        if(choice == 3) break;
        else cout << "Try again\n";
    }while(true);
    return 0;
}
string cal_grade(int score){
    string grade;
    if(score >= 90) grade="A";
    else if(score >= 80) grade="B";
    else grade = "F";
    return grade;
}