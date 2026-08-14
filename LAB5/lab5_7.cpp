#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1 = "Microsoft";
    string str2 = str1 + "Word";
    string str3;

    cout << "Value Str1 = " << str1;
    cout << ",Length Str1 = " << str1.length() << endl;
    cout << "Value Str2 = " <<  str2;
    cout << ",Length Str2 = " << str2.length() << endl;
    cout << "VAlue Str3 = " << str3;
    cout << ",Length Str3 = " << str3.length() << "\n\n";
    cout << "Enter text to Str3 : " ; cin >> str3;
    cout << "Now Length Str3 = " << str3.length() << "\n\n";
    switch (str1.compare(str2)){
        case 0: cout << "Str1 equal Str2" << endl; break;
        case 1: cout << "Str1 more than Str2" << endl; break;
        case -1: cout << "Str1 less than Str2" << endl; break;
    }
    
    cout << "\nNow find's' in Str3" << endl;
    int pos = str3.find("s");
    if(pos>1)
    cout << "found 's' in Str3." << endl;
    else 
    cout << "not found 's' in Str3." << endl;

    str2.erase(5,4);
    cout << "After erase character to Str2 : " << str2 << endl;
    str1.replace(5,4,"chip");
    cout << "After replace character to Str1 : " << str1 << endl;
    cout << "\nString substr from Str1 and Str2 : ";
    cout << str1.substr(0,5) << str2.substr(5,4) << endl;
    return 0;
}