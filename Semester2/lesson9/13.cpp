#include <iostream>
#include <cstring>
using namespace std;

int hex(int astichan)
{
    int a = 1;
    for (int i = 0; i < astichan; i++)
    {
        a *= 16;
    }
    return a;
}

int main()
{
    char tox[8];
    int arr[7];
    cin.getline(tox, '7', '\n');

    for (int i = 0; i < strlen(tox); i++)
    {
        switch (tox[i])
        {
        case '0':
            arr[i] = 0;
            break;
        case '1':
            arr[i] = 1;
            break;
        case '2':
            arr[i] = 2;
            break;
        case '3':
            arr[i] = 3;
            break;
        case '4':
            arr[i] = 4;
            break;
        case '5':
            arr[i] = 5;
            break;
        case '6':
            arr[i] = 6;
            break;
        case '7':
            arr[i] = 7;
            break;
        case '8':
            arr[i] = 8;
            break;
        case '9':
            arr[i] = 9;
            break;
        }
    }

    int sum = 0;
    int lastIndex = strlen(tox) - 1;

    for (int i = 0; i <= lastIndex; i++)
    {
        sum += (arr[lastIndex - i] * hex(i));
    }
    cout << sum;

    return 0;
}