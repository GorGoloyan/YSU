#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[60];
    cin.getline(arr, 60, '.');

    for (int i = 0; i < strlen(arr); i++)
    {
        arr[i] = ('A' + arr[i] - 'a');
        cout << arr[i];
    }

    return 0;
}