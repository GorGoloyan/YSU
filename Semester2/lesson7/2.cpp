#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[60];
    cin.getline(arr, 60, '\n');

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            cout << arr[i];
        }
    }

    return 0;
}