#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[80];
    cin.getline(arr, 40, '\n');

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'e' && arr[i + 1] == 'd')
        {
            arr[i] = 'i';
            arr[i + 1] = 'n';
            for (int j = strlen(arr); j >= i + 1; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[i + 2] = 'g';
        }

        if (arr[i] == 'p' && arr[i + 1] == 'h')
        {
            arr[i] = 'f';
            for (int j = i + 1; j < strlen(arr); j++)
            {
                arr[j] = arr[j + 1];
            }
        }
    }

    cout << arr;

    return 0;
}