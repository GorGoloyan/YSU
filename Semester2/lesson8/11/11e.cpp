#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tox[150], tox1[300];
    cin.getline(tox, 150, '\n');

    for (int i = 0, j = 0; i < strlen(tox); i++)
    {
        if (tox[i] == 'a')
        {
            cout << "ab";
        }

        else
        {
            tox1[j] = tox[i];
            j++;
        }
    }

    cout << tox1;
    return 0;
}
