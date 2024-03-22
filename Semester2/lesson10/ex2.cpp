#include <iostream>
#include <cmath>
using namespace std;

struct rac
{
    int hamarich;
    unsigned int haytarar;
};

void reduct(rac &r1)
{
    int a = abs(r1.hamarich);
    int b = r1.haytarar;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    r1.hamarich /= a;
    r1.haytarar /= a;
}

rac sum(rac a, rac arr)
{
    rac s;
    s.haytarar = a.haytarar * arr.hamarich + a.haytarar * arr.hamarich;
    s.hamarich = a.hamarich * arr.haytarar;
    return s;
}

int main()
{
    const int size = 2;
    rac arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i].hamarich >> arr[i].haytarar;
    }
    rac s;
    s.hamarich = 0;
    s.haytarar = 1;

    for (int i = 0; i < size; i++)
    {
        s = sum(s, arr[i]);
    }
    reduct(s);
    cout << s.hamarich << " / " << s.haytarar;
}