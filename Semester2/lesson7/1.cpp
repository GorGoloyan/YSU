#include <iostream>
#include <cstring>
using namespace std;



int main()
{
    char x[60];
    cin.getline(x, 60, '\n');

    for (int i = 0; i < 60; i++)
    {
        if (x[i] >= 'a' && x[i] <= 'z')
            cout << x[i];
    }
}