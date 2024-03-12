#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[40];
    cin.getline(arr, 40, '\n');

    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == 'a' && arr[i + 1] == 'b' && arr[i + 2] == 'c')
        {
            arr[i] = 'd';
            arr[i + 1] = 'e';
            arr[i + 2] = 'f';
        }
    }

    cout << arr;

    return 0;
}