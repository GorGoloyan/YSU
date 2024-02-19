//z
#include <iostream>
using namespace std;

int main()
{
    const int count = 4;
    int arr[count];
    unsigned int Matrix[count][count]{
        {1, 3, 2, 4},
        {5, 4, 6, 8},
        {14, 3, 55, 44},
        {122, 32, 100, 55},
    };

    for (int i = 0; i < count; i++)
    {
        int min = Matrix[i][0];

        for (int j = 1; j < count; j++)
        {
            if (min > Matrix[i][j])
                min = Matrix[i][j];
        }

        arr[i] = min;
    }

    int k = arr[0];
    for (int i = 1; i < count; i++)
    {
        if (k < arr[i])
            k = arr[i];
    }

    cout << k;
}