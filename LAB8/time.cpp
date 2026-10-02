#include "time.h"
#include <iostream>
#include <iomanip>
using namespace std;
Time::Time(): hours(0), minutes(0), second(0){}
Time::Time(int h, int m, int s): hours(h), minutes(m), second(s){}

void Time::setHours(int h){
    hours = h;
}

void Time::setMinute(int m){
    minutes = m;
}

void Time::setSecond(int s){
    second = s;
}

int Time::getHours(){
    return this->hours;
}

int Time::getMinute(){
    return this->minutes;
}

int Time::getSecond(){
    return this->second;
}

void Time::showTime(){
    cout << setw(2) << getHours()
         << setw(2) << getMinute()
         << setw(2) << getSecond() << endl;
}
