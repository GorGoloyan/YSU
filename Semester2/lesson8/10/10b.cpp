#include <iostream>
#include "string.h"

int main()
{
    char tox[150];
    std::cin.getline(tox, 150, '\n');

    int Max = 0;
    int id = 0;
    int MaxId = 0;
    int count = 0;
    if ('0' <= tox[0] && tox[0] <= '9')
    { // ստուգում է առաջին նիշը թիվ է թէ ոչ
        count = 1;
    }

    for (int i = 1; i < strlen(tox); ++i)
    {
        if ('0' <= tox[i] && tox[i] <= '9')
        { // եթե թիվ է
            if ('0' <= tox[i - 1] && tox[i - 1] <= '9')
            { // և նրա նախորդն նույնպես թիվ է
                count++;
            }
            else
            { // եթե թիվ է և նրա նախորդն նույնպես թիվ չէ
                count = 1;
                id = i;
            }
        }
        else
        { // եթե թիվ չէ

            if (Max < count)
            {
                Max = count;
                MaxId = id;
            }
            count = 0;
        }
    }
// եթե վերջանում է թվով
    if (Max < count)
    {
        Max = count;
        MaxId = id;
    }

    for (int i = MaxId; i < MaxId + Max; ++i)
    {
        std::cout << tox[i];
    }

    return 0;
}
