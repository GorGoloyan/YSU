#include <iostream>
using namespace std;

void is2sq(int count, int arr[])
{
    int t = 0;
    int indexOf2[count]{0};
    for (int i = 0; i < count; i++)
    {
        int stugox = 2;
        while (arr[i] >= stugox)
        {
            if (arr[i] == stugox)
            {

                indexOf2[t] = i;
                ++t;
            }

            stugox *= 2;
        }
    }

    for (int i = 0, k = 0; i < count; i++)
    {
        if (i == indexOf2[k])
        {
            ++k;
            continue;
        }
        else
            cout << arr[i] << "\t";
    }
}

int main()
{
    const int count = 10;
    int arr[count]{12, 3, 2, 9, 3, 16, 1, 9, 4, -184};
    is2sq(count, arr);
}