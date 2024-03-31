#include <iostream>
using namespace std;

void binar(unsigned n)
{
    if(n == 0)
    {
        cout << 0;
            return;
    }
       
    if ( n == 1)
    {
         cout << 1;
            return;
    }
        binar(n/2);

    cout << n%2;
        
}

int main()
{
    unsigned int n;
    cin>>n;
    binar(n);
    return 0;
}