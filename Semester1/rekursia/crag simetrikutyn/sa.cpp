#include <iostream>
using namespace std;

bool sim(int a)
{
    int s = 0;
    int temp = a;
    while(temp > 0)
    {
        s = s * 10 + temp % 10;
        temp /= 10;
    }
    return s == a;
}

void f(int x[], int n)
{
    if(sim( x[n-1]  ))
    {
        cout << x[n-1] << endl;
    }
    if (n != 1)
    {
        f(x, n-1);
    }

}

int main()
{
    const int n =5;
    int A[n];
    for (int c = 0; c < n; c++)
    {
        cin >> A[c];
    }
    f(A, n);
    
    return 0;
}