#include <iostream>
using namespace std;

int f(int arr[], int arrLength, int num)
{
    if(arr[arrLength-1] == num)
        return arrLength - 1;
    if (arr[arrLength-1] == 1)
        return -1;
    return f(arr, arrLength - 1, num);
}


int main()
{
    const int n = 5;
    int arr[n], x;

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x;

    cout << f(arr, n, x);

    return 0;
}