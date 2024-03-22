#include <iostream>
#include <cstring>
using namespace std;

int any(char *s1, char *s2)
{

    for (int i = 0; i < strlen(s1); ++i)
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    char s1[100], s2[100];

    cin.getline(s1, 100, '\n');
    cin.getline(s2, 100, '\n');

    cout << any(s1, s2);

    return 0;
}
