 #include <iostream>
 using namespace std;

 int main() {
     int year, maxday;

     cout << "Enter year : ";
     cin >> year;

     maxday = (year % 4 == 0) ? 29 : 28;

     cout << "In " << year
          << ((year % 4 == 0) ? " is leap year " : " is not leap year ");
     cout << "and February has " << maxday << " day.\n";

     return 0;
}