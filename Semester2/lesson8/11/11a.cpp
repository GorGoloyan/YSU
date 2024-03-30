#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tox[150]; // zaanhgd - zanhgd
    cin.getline(tox, 150, '\n');
    char tox1[150];

    for (int i = 1, t = 0; i < strlen(tox); i++)
    {
        if(tox[i] == tox[i-1])
            {
                i++;
            }
            tox1[t] = tox[i];
            t++;
    }
   
}
