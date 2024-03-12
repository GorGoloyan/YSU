#include <iostream>
#include <cmath>
using namespace std;

double f(double x, double y)
{
    if (x > y)
    {
        return x;
    }
    return y;
}
double Sum(int arr[], int size, double (*g)(double, double))
{
    double s = arr[0], l = 1 / arr[1], S = g(s, l);
    int p = 1, k = 0;
    for (int i = 1; i < size - 1; ++i)
    {
        p++;
        k++;
        l = pow(-1, k) / arr[i + 1];
        s = pow(arr[i], p);
        S += f(s, l);
    }
    return S;
}
int main()
{
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }
    cout << Sum(arr, size, f);
    return 0;
}