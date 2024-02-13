#include <iostream>
using namespace std;

bool isParz(int a)
{

    if (a <= 1)
        return 0;
    if (a == 2)
        return 1;
    if (a % 2 == 0)
        return 0;
    for (int i = 3; i * i <= a; i += 2)
    {
        if (a % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    const int size = 10;
    int count = 0, i;
    int arr[size]{2, 5, 7, 8, -1, 6, 7, 10};

    bool t = 0;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] < 0)
        {
            t = 1;
            break;
        }

        else if (isParz(arr[i]))
            count++;
    }

    cout << ((t) ? count : -1);
}