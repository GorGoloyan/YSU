#include <iostream>
#include <cstring>
using namespace std;

char toLow(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    return ch + 32;
}

int len(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

bool issimetric(const char *tox)
{
    int lg = len(tox) - 1;
    for (int i = 0; i <= lg / 2; i++)
        if (toLow(tox[i]) != toLow(tox[lg - i]))
            return false;
    return true;
}

int main()
{

    char tox[150];
    cin.getline(tox, 150, '\n');
    int count = 0;

    for (int i = 0; i < len(tox);)
    {//jbwrlhb   htjhwj 
        count++;
        while (tox[i] == ' ')
            i++;

        while (tox[i] != ' ')
        {
            i++;
        }
    }

    char *bar = strtok(tox, " ");
    char **matrix = new char *[count];
    strcpy(matrix[0], bar);

    for (int i = 1; i < count; i++)
        matrix[i] = strtok(NULL, " ");

    for (int i = 0; i < count; i++)
    {
        if(matrix[i] != matrix[count-1] && issimetric(matrix[i]))
            cout << matrix[i] << '\t';
    }

    return 0;
}