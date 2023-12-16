#include <iostream>
using namespace std;

int fact( int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

bool f(int n)
{
    int i = 0;
    
    while(fact(i) < n)
        i++;
    
    return fact(i) == n; 

}

int main ()
{
    unsigned n;
    cin >> n;
    cout << (f(n) ? "Yes" : "No");
    return 0;

}


