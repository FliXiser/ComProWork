#include <iostream>
using namespace std;
bool isPalindrome(char Temp[]);

int main(){
    char Name[20];
    cout << "Enter text : ";
    cin.getline(Name, 20); 
    cout << "==============================" << endl;

    if (isPalindrome(Name)) 
        cout << "Your text is Palindrome." << endl;
    else
        cout << "Your text is not Palindrome." << endl;
    return 0;
}

bool isPalindrome(char Temp[]){ 
    int i, j;      
    int length = 0;     
    while (Temp[length] != '\0')    
        length++;
    j = length - 1;

    for (i = 0; i < length / 2; i++){   
        cout << Temp[i] << " = " << Temp[j] << endl;    
        if (Temp[i] != Temp[j]) 
            return false; 
        j--;
    }
    return true;    
}