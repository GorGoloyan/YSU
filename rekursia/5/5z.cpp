#include <iostream>
using namespace std;

unsigned int f(unsigned n)
{   
    if(n == 1)
        return n;
    if (n == 2)
        return 1;
    return 10 * f(n-1) + f(n-2) ; 
}

int main()
{
    unsigned int n;
    cin>>n;
    cout<<f(n);
    return 0;
}