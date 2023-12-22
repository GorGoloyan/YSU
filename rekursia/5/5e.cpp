#include <iostream>
using namespace std;

unsigned int f(unsigned n)
{
    if (n < 8)
        return n;
    return (n % 8) + f(n / 8) * 10;
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << f(n);
    return 0;
}