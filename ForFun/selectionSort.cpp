#include <iostream>
using namespace std;

void selectionsort(int arr[], int size) // 2 4 1 5 0
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
            if (arr[minIndex] > arr[j])
                minIndex = j;

        int tmp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = tmp;
        // 0 4 1 5 2
        // 0 1 4 5 2
        // 0 1 2 5 4
        // 0 1 2 4 5
    }
}

int main()
{
    const int size = 5;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    selectionsort(arr, size);

    cout << arr[2];
}