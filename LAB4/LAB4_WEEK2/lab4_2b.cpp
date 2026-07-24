#include <iostream>
using namespace std;

void greeting_time(float);

void cal_grade(int);

int main()
{
    cal_grade(80);
    cal_grade(79);
    cal_grade(71);
    cal_grade(70);
    cal_grade(90);
    greeting_time(24.00);
    greeting_time(1.60);
    return 0;
}

void cal_grade(int mark)
{
    // cout << mark << "=";
    // if (mark >= 80) cout << "A";
    // else if (mark >= 70) cout << "B";
    // else if (mark >= 60) cout << "C";
    // else if (mark >= 50) cout << "D";
    // else cout << "F";
    cout << endl;
}

// ตรวจสอบ ชม นาที วินาที
void greeting_time(float time)
{
    int minute = ((time - (int)time) * 100);
    cout << time << ":" << minute << endl;
    if ((time >= 0.00) && (time <= 23.59))
    {
        if ((minute >= 0) && (minute <= 59))
        {
            if ((time >= 0.00) && (time < 12.00))
            {
                cout << "Good Morning";
            }
            else if ((time >= 12.00) && (time < 18.00))
            {
                cout << "Good Afternoon";
            }
            else if ((time >= 0.00) && (time < 12.00))
            {
                cout << "Good Evening";
            }
        }

        else
        {
            cout << "Time is out of range (min)\n";
        }
    }
    else
    {
        cout << "Time is out of range (hrs)\n";
    }
}

// void greeding_time(float time){
//     if ((time >= 0.00) && (time < 24.00))
//         if ((time >= 0.00) && (time < 12.00)){
//             cout << "Good Morning";
//         else if ((time >= 12.00) && (time < 18.00))
//             cout << "Good Afternoon";
//         else if ((time >= 18.00) && (time < 24.00))
//     cout << "Good Evening";
//         }
//         else cout << "Time is out of range";
// }