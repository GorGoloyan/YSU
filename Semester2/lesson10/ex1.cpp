#include <iostream>
using namespace std;

struct time1
{
    unsigned int time;
    unsigned int minute;
    unsigned int sec;
};

int main()
{

    time1 p1, p2;
    cin >> p1.time >> p1.minute >> p1.sec;
    p2 = p1;
    if (p2.sec < 59)
        p2.sec++;
    else
    {
        p2.sec = 0;
        if (p2.minute < 59)
            p2.minute++;
        else
        {
            p2.minute = 0;
            p2.time = (p2.time + 1) % 24;
        }
    }

    cout <<p2.time << ":" << p2.minute << ":" << p2.sec;
}
