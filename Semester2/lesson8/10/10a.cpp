#include <iostream>
#include <cstring>

// իրար հաջորդող թվանշանների ամենաերկար հաջորդականության քանակը

int main()
{
    char tox[150];
    std::cin.getline(tox, 150, '\n');
    int counter = 0, tpm = 0;

    for (int i = 0; i < strlen(tox);)
    {
        while ((tox[i] < '0' || tox[i] > '9') && i < strlen(tox))
        {
            ++i;
        }

        while (tox[i] >= '0' && tox[i] <= '9' && i < strlen(tox))
        {
            tpm++;
            ++i;
        }

        if (tpm > counter)
        {
            counter = tpm;
            tpm = 0;
        }
    }

    std::cout << counter;
}


