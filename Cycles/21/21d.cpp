#include <iostream>
using namespace std;

bool isParz(int n)
{
    if(n < 2 )
        return false;
    for(int i = 2; i <=n/2; i++)
        if (n % i == 0)
            return false;
    return true;
}


int main ()
{
    unsigned n;
    cin >> n;
    cout << (isParz(n) ? "Yes" : "No");
    return 0;

}
