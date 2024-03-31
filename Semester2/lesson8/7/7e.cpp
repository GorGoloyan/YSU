#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[210];
    cin.getline(s, 210, '.');
    int count[30];
    for (int i = 0; i < 30; i++)
         count[i] = 1;

    int counter = 1;
    for (int i = 0; i < strlen(s); ++i)
    {
        if (s[i] == ',')
            ++counter;
    }
    char *p = strtok(s, ",");
    char **matrix = new char *[counter];
    matrix[0] = p;
    for (int i = 1; i < counter; ++i)
    {
        matrix[i] = strtok(NULL, ",");
    }
    for (int i = 0; i < counter; ++i)
    {
        if (count[i] == -1)
            continue;
        for (int j = i + 1; j < counter; ++j)
        {
            if (strcmp(matrix[i], matrix[j]) == 0)
            {
                count[i] += 1;
                count[j] = -1;
            }
        }
    }

    for (int i = 0; i < counter; ++i)
    {
        if(count[i] != -1)
        cout << matrix[i] << " " << count[i] << endl;
    }

    return 0;
}