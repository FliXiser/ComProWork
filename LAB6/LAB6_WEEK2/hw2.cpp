#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

const int MAX_STUDENT = 20;
const int MAX_NAME = 20;
const int MAX_TEST = 3;

void getdata(char Id[][6], char Name[][MAX_NAME + 1],
             double Score[][MAX_TEST], int Student);

void sortdata(char Id[][6], char Name[][MAX_NAME + 1],
              double Score[][MAX_TEST], int Student);

void average(double Score[][MAX_TEST], double RealScore[][MAX_TEST],
             double Total[], int Student);

void displaydata(char Id[][6], char Name[][MAX_NAME + 1],
                 double RealScore[][MAX_TEST], double Total[],
                 int Student);

int main(){
    char Id[MAX_STUDENT][6];
    char Name[MAX_STUDENT][MAX_NAME + 1];

    double Score[MAX_STUDENT][MAX_TEST];
    double RealScore[MAX_STUDENT][MAX_TEST];
    double Total[MAX_STUDENT];

    getdata(Id, Name, Score, MAX_STUDENT);

    average(Score, RealScore, Total, MAX_STUDENT);

    sortdata(Id, Name, RealScore, MAX_STUDENT);

    displaydata(Id, Name, RealScore, Total, MAX_STUDENT);

    return 0;
}

void getdata(char Id[][6], char Name[][MAX_NAME + 1],
             double Score[][MAX_TEST], int Student){

    for(int i = 0; i < Student; i++){
        cout << "\nStudent " << i + 1 << endl;

        cout << "ID : ";
        cin >> Id[i];

        cout << "Name : ";
        cin >> Name[i];

        cout << "Test1 : ";
        cin >> Score[i][0];

        cout << "Test2 : ";
        cin >> Score[i][1];

        cout << "Test3 : ";
        cin >> Score[i][2];
    }
}

void average(double Score[][MAX_TEST], double RealScore[][MAX_TEST],
             double Total[], int Student){

    for(int i = 0; i < Student; i++){

        RealScore[i][0] = Score[i][0] * 25.0 / 100.0;
        RealScore[i][1] = Score[i][1] * 25.0 / 100.0;
        RealScore[i][2] = Score[i][2] * 50.0 / 100.0;

        Total[i] = RealScore[i][0]
                 + RealScore[i][1]
                 + RealScore[i][2];
    }
}

void sortdata(char Id[][6], char Name[][MAX_NAME + 1],
              double Score[][MAX_TEST], int Student){

    char tempId[6];
    char tempName[MAX_NAME + 1];
    double tempScore[MAX_TEST];

    for(int i = 0; i < Student - 1; i++){

        for(int j = 0; j < Student - i - 1; j++){

            double total1 = Score[j][0]
                          + Score[j][1]
                          + Score[j][2];

            double total2 = Score[j + 1][0]
                          + Score[j + 1][1]
                          + Score[j + 1][2];

            if(total1 < total2){

                strcpy(tempId, Id[j]);
                strcpy(Id[j], Id[j + 1]);
                strcpy(Id[j + 1], tempId);

                strcpy(tempName, Name[j]);
                strcpy(Name[j], Name[j + 1]);
                strcpy(Name[j + 1], tempName);

                for(int k = 0; k < MAX_TEST; k++){
                    tempScore[k] = Score[j][k];
                    Score[j][k] = Score[j + 1][k];
                    Score[j + 1][k] = tempScore[k];
                }
            }
        }
    }
}

void displaydata(char Id[][6], char Name[][MAX_NAME + 1],
                 double RealScore[][MAX_TEST], double Total[],
                 int Student){

    cout << fixed << setprecision(2);

    cout << "\n";
    cout << "--------------------------------------------------------------------------"
         << endl;

    cout << "No.    Id      Name"
         << setw(18) << "Test1(25%)"
         << setw(12) << "Test2(25%)"
         << setw(12) << "Test3(50%)"
         << setw(13) << "Total(100%)"
         << endl;

    cout << "--------------------------------------------------------------------------"
         << endl;

    for(int i = 0; i < Student; i++){

        cout << setw(3) << i + 1 << "."
             << setw(8) << Id[i]
             << setw(15) << Name[i]
             << setw(12) << RealScore[i][0]
             << setw(12) << RealScore[i][1]
             << setw(12) << RealScore[i][2]
             << setw(13) << Total[i]
             << endl;
    }

    cout << "--------------------------------------------------------------------------"
         << endl;

    double avgTest1 = 0;
    double avgTest2 = 0;
    double avgTest3 = 0;
    double avgTotal = 0;

    for(int i = 0; i < Student; i++){
        avgTest1 += RealScore[i][0];
        avgTest2 += RealScore[i][1];
        avgTest3 += RealScore[i][2];
        avgTotal += Total[i];
    }

    avgTest1 /= Student;
    avgTest2 /= Student;
    avgTest3 /= Student;
    avgTotal /= Student;

    cout << "Average of mark"
         << setw(21) << avgTest1
         << setw(12) << avgTest2
         << setw(12) << avgTest3
         << setw(13) << avgTotal
         << endl;
}