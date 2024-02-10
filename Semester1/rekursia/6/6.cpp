#include <iostream>
using namespace std;

int f(int n, int m)
{
    if (n == 0)
        return m;
    if (m == 0)
        return n;
    return f(m, (n % m));
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << f(n, m);
    return 0;
}