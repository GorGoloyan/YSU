#include <iostream>
using namespace std;

int a(int x, int n)
{
    if (n == 1)
        return 1;
    if (!(n % 2))
        return a(x, n / 2) * a(x, n / 2);
    if ((n > 1) && (n % 2))
        return x * a(x, n - 1);
}

int main()
{
    int x, n;
    cin >> x >> n;
    cout << a(x, n);
}