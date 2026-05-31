#include <iostream>
using namespace std;

class Time
{
    private:
int second, minutes, hour;

public:
Time( int a_second, int a_minutes, int a_hour)
{
    second = a_second;
    minutes = a_minutes;
    hour = a_hour;
}

void showTime(){
    cout << hour << ":" << minutes << ":" << second << endl;
}

};
int main(){
    cout
    return 0;
}