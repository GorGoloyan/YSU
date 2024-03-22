#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tox[100];
    cin.getline(tox, 100, '\n');
    int counter = 0, counter1 = 0;

    for (int i = 0; i < strlen(tox); i++)
    {
        if (tox[i] == '(' || tox[i] == ')')
            counter++;
        if (tox[i] == '(')
            while (tox[i] != ')')
            {
                counter1++;
                i++;
            }
    }

    if (counter % 2 != 0)
        cout << "NO";
    else if (counter1 % 2 == 0)
        cout << "NO";
    else
    {
        cout << "Yes";
    }
    return 0;
}