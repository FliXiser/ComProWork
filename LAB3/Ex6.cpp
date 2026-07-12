#include <iostream>
using namespace std;
int main(){
    int Skilo , Ekilo , hour , minute , second;
    double kilo , time , velocity;
    cout << "Data inputs are integer!." << endl ;
    cout << endl;
    cout << "==============================================" << endl ;
    cout << endl;
    cout << "Enter start kilometer : " ; cin >> Skilo;
    cout << "Enter end kilometer : " ; cin >> Ekilo;
    cout << "Enter time used (hour minute second) : " ; cin >> hour >> minute >> second;
    kilo = Ekilo - Skilo;
    time = hour + (minute / 60.0) + (second / 3600.0);
    velocity = kilo / time;
    cout << endl;
    cout << "==============================================" << endl ;
    cout << endl;
    cout << "Car traveled " << kilo << " kilometers in " << hour << " hrs " << minute << " min " << second << "sec." << endl;
    cout << "Average velocity was " << velocity << "kph.";
    return 0;
}