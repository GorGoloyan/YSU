// erkar
#include <iostream>
using namespace std;

void f(int arr[], int n)
{
    for (int k = 0; k < 3; k++)
    {
        int t = arr[0];
        int amen = arr[0];

        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] > t)
            {
                amen = arr[i + 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] < t)
            {
                t = arr[i + 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (t == arr[i])
            {
                t = i;
            }
        }
        cout << arr[t] << "  ";
        arr[t] = amen;
    }
}

int main()
{
    const int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    f(arr, n);

    return 0;
}