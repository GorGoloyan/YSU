#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[80];
    cin.getline(arr, 40, '\n');

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'q')
        {
            arr[i] = 'q';
            for (int j = strlen(arr); j >= i; j--)
            {
                arr[j + 1] = arr[j];
            }
            arr[i + 1] = 'u';
        
        }
    }

    cout << arr;

    return 0;
}