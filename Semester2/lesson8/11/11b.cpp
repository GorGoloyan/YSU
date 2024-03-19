#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tox[150]; // zaanhgd - zanhgd
    cin.getline(tox, 150, '\n');


    for (int i = 0; i < strlen(tox);)
    {
        if (tox[i] == tox[i + 1])
        {
            int index = i;
            while (tox[i] == tox[index])//aaasss
            {
                i++;
            }
        }
        else
        {
            cout << tox[i];
            i++;
        }
    }
}
