//a
#include <iostream>
using namespace std;

int main()
{
    const int count = 4;
    int counter = 0;

    unsigned int arr[count][count]{
        {1, 3, 2, 4},
        {2, 4, 6, 8},
        {14, 33, 55, 44},
        {122, 32, 44, 55},
    };

    for (int i = 0; i < count; i++)
    {
        int counter1 = 0;
        for (int j = 0; j < count; j++)
        {

            if (arr[i][j] % 2)
                counter1++;
        }

        if (counter1 >= 2)
            counter++;
    }

    cout << counter;
}