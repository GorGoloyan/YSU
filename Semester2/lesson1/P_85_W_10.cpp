//?
#include <iostream>
using namespace std;

bool isParz(int a)
{
    if (a == 1)
        return 1;
    if (a < 1)
        return 0;
    for (int i = 2; i < a / 2; i++)
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

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
            break;
        else if (isParz(arr[i]))
            count++;
    }

    cout << ((arr[i] < 0) ? count : -1);
}
