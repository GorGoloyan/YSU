#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[41];
    cin.getline(arr, 40, '\n');

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'x')
        {
            arr[i] = 'k';
            for (int j = strlen(arr); j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[i + 1] = 's';
            break;
        }
    }

    cout << arr;

    return 0;
}