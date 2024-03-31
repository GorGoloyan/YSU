#include <iostream>
#include <cstring>
using namespace std;

void isUperSace(char *a)
{
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        a[0] = a[0] - 32;
    }
}

int main()
{

    char tox[150];
    cin.getline(tox, 150);
    int counter = 1;
    for (int i = 0; i < strlen(tox); i++)
    {
        if (tox[i] == ' ')
            counter++;
    }
    char **matrix = new char *[counter];
    char *p = strtok(tox, " ");
    matrix[0] = p;
    for (int i = 1; i < counter; i++)
    {
        p = strtok(NULL, " ");
        matrix[i] = p;;
    }

    for (int i = 0; i < counter; i++)
    {
       isUperSace(matrix[i]);
        cout << matrix[i] << '\t';
    }

    return 0;
}
