// Տրված են 2 դինամիկ կարգավորված հաջորդականություններ, +
// դասավորված են աճման կարգով,
// ստանալ մեկ ուրիշ կարգավորված հաջորդականություն,որը դրանց միավորումն է


#include <iostream>
using namespace std;

int ajum(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
    }
}

int main()
{
    int count = 3;
    int *arr1 = new int[count];
    int *arr2 = new int[count];

    for (int i = 0; i < count; i++)
        cin >> arr1[i];

    for (int i = 0; i < count; i++)
        cin >> arr2[i];

    int *arr3 = new int[2 * count];

    for (int i = 0; i < count; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = count, t = 0; i < 2 * count; t++, i++)
    {
        arr3[i] = arr2[t];
    }
    ajum(arr3, 2 * count);

    for (int i = 0; i < 2 * count; i++)
        cout << arr3[i] << "\t";
}