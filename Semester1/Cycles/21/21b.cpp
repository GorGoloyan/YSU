#include <iostream>
using namespace std;

int indexToFib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return indexToFib(n - 1) + indexToFib(n - 2);  
}

bool f(int n)
{
    int i = 0;
    
    while(indexToFib(i) < n)
        i++;
    
    return indexToFib(i) == n; 

}

int main()
{
    unsigned n;
    cin >> n;
    cout << (f(n) ? "Yes" : "No");  
    return 0;  
}