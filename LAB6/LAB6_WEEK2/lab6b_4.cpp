#include <iostream>
#include <string>
#include <cstring>
using namespace std;
void SortString(char Data[][20]);

int main(){
    char City[5][20];
    cout << "Enter VALUR STRING.\n\n";
    for (int i = 0; i < 5; i++){
        cout << "input name of City " << i+1 << ": ";
        cin >> City[i];
    }
    SortString(City);
    cout << "\nList name of City.\n";
    for (int i = 0; i < 5; i++)
        cout << i+1 << " " << City[i] << endl;
        return 0;    
}

void SortString(char Data[][20]){
    int i , j , flag;
    char temp[20];
    for(i=1; i<5 ; i++){
        flag = 0;
        for ( j = 0; j < 5; j++){
            if(strcmp(Data[j],Data[j+i]) > 0){
                strcpy(temp,Data[j]);
                strcpy(Data[j],Data[j+1]);
                strcpy(Data[j+1],temp);
                flag =1;
            }
        }
        if(!flag) break;
    }
}