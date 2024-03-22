#include <iostream>
#include <cstring>
using namespace std;

char toLow(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    return ch + 32;
}

bool issimetric(const char *tox)
{
    int lg = strlen(tox) - 1;
    for (int i = 0; i <= lg / 2; i++)
        if (toLow(tox[i]) != toLow(tox[lg - i]))
            return false;
    return true;
}

int main()
{
    char tox[100], s1[100];
    cin.getline(tox, 100, '\n');

    for (int i = 0, t = 0; i < strlen(tox); i++)
    {
        if (tox[i] >= 'a' && tox[i] <= 'z' || tox[i] >= 'A' && tox[i] <= 'Z')
        {
            s1[t] = tox[i];
            t++;
        }
    }

    if (issimetric(s1))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}