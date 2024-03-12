#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[40];
    cin.getline(arr, 40, '\n');
    int index = 0;

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'w')
        {
            for (int j = i; j < strlen(arr); j++)
            {
                arr[j] = arr[j + 1];
            }
            break;
        }
    }

    cout << arr;

    return 0;
}