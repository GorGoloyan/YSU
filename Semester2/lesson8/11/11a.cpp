#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tox[150]; // zaanhgd - zanhgd
    cin.getline(tox, 150, '\n');

    for (int i = 1, t = 0; i < strlen(tox); i++)
    {
        if(tox[i] == tox[i-1])
            {
                i++;
            }
            cout << tox[i];
    }
   
}
