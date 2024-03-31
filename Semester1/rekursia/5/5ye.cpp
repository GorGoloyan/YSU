#include <iostream>
using namespace std;

unsigned int f(unsigned n)
{
    if (n < 10)
        return n;
    return (n % 10) * 10 + f(n / 10);
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << f(n);
    return 0;
}