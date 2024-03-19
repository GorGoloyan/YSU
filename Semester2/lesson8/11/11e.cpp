#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tox[150]; // a - ab
    cin.getline(tox, 150, '\n');

    for (int i = 0; i < strlen(tox); i++)
    {
        if (tox[i] == 'a')
        {
            cout << "ab";
        }
        else
        {
            cout << tox[i];
        }
    }
}
