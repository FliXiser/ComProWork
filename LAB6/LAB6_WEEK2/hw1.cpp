#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

const int MAX_STUDENT = 500;

void RandomVote(int Vote[], int Candidate);
int TotalVote(int Vote[], int Candidate);
double Percent(int Vote, int Total);

int main(){
    int Candidate;
    int Vote[100];
    int totalVote;
    int notVote;

    cout << "Enter number student chairman : "; cin >> Candidate;

    srand((unsigned)time(0));

    RandomVote(Vote, Candidate);

    totalVote = TotalVote(Vote, Candidate);
    notVote = MAX_STUDENT - totalVote;

    cout << fixed << setprecision(1);

    cout << "\nNumber of right student : " << MAX_STUDENT << endl;
    cout << "Number of Votes : " << totalVote
         << " = " << Percent(totalVote, MAX_STUDENT) << "%" << endl;

    cout << "Number of not Votes : " << notVote
         << " = " << Percent(notVote, MAX_STUDENT) << "%" << endl;

    cout << "\nResult of election chairman" << endl;
    cout << "--------------------------------" << endl;
    cout << "No.     Votes     Percent(%)" << endl;
    cout << "--------------------------------" << endl;

    for(int i = 0; i < Candidate; i++){
        cout << setw(3) << i + 1 << "."
             << setw(9) << Vote[i]
             << setw(12) << fixed << setprecision(2)
             << Percent(Vote[i], totalVote) << endl;
    }

    cout << "--------------------------------" << endl;
    cout << "Total"
         << setw(8) << totalVote
         << setw(12) << fixed << setprecision(2)
         << Percent(totalVote, totalVote) << endl;

    return 0;
}

void RandomVote(int Vote[], int Candidate){
    int remain = MAX_STUDENT;

    for(int i = 0; i < Candidate; i++){
        if(i == Candidate - 1){
            Vote[i] = rand() % (remain + 1);
        }
        else{
            Vote[i] = rand() % (remain + 1);
            remain -= Vote[i];
        }
    }
}

int TotalVote(int Vote[], int Candidate){
    int total = 0;

    for(int i = 0; i < Candidate; i++)
        total += Vote[i];

    return total;
}

double Percent(int Vote, int Total){
    if(Total == 0)
        return 0;

    return (double)Vote / Total * 100;
}