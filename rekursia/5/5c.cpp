#include <iostream>
using namespace std;

unsigned int f(unsigned n)
{   
    unsigned newN = n;
    int f_digit = n % 10;

    if(n == 0)
        return 0;
    while(newN > 10){
        f_digit *= 10;
        newN /= 10;
    }
    
    return f_digit + f(n/10);
}

int main()
{
    unsigned int n;
    cin >> n;
    cout << f(n);
    return 0;
}