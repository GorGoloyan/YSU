#include <iostream>

double f(int x, int y)
{
    return (x + y) / 2.0;
}

double f1(int arr[], int n, double (*)(int x, int y))
{
    double M = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (M < f(arr[i], arr[j]))
            {
                M = f(arr[i], arr[j]);
            }
        }
    }

    return M;
}

int main()
{
    int n;
    std::cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; ++i)
    {
        std::cin >> arr[i];
    }

    std::cout << f1(arr, n, f);

    return 0;
}