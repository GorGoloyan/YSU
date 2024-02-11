#include <iostream>
using namespace std;

void foo(int a, int b, int *sum, int *tarb, int *art)
{
    *sum = a + b;
    *tarb = a - b;
    *art = a * b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int sum, tarb, art;
    int *psum = &sum;
    foo(a, b, psum, &tarb, &art);
    cout << sum << tarb << art;
}