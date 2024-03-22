#include <iostream>
#include <cstring>
using namespace std;

int find(char *str, char *substr)
{
    int indexes = 0;
    if (!strcmp(str, substr))
        return indexes;
}

int main()
{
    char s1[100], s2[100];

    cin.getline(s1, 100, '\n'); // tox
    cin.getline(s2, 100, '\n'); // bar

    int counter = 1;
    for (int i = 0; i < strlen(s1); i++)
        if (s1[i] == ' ')
            counter++;

    char *p = strtok(s1, " ");
    char **matrix = new char *[counter];
    matrix[0] = p;

    for (int i = 1; i < counter; i++)
    {
        matrix[i] = strtok(NULL, " ");
    }

    int index = strlen(matrix[0]), k = 0;
    for (int i = 1; i < counter; i++)
    {
        if (find(matrix[i], s2))
        {
            index += 1 + strlen(matrix[i]);
            k = 1;
        }
    }

    if (!find(matrix[0], s2))
    {
        cout << 0;
    }
    else if (k)
    {
        cout << index;
    }
    else
    {
        cout << -1;
    }

    return 0;
}