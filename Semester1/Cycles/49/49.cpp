#include <iostream>
using namespace std;

bool isSimetric(int n)
{
   
    int oldNum = n; //121
    int newNum = 0;

    while(n > 0)
    {
        newNum = newNum * 10 + n % 10; // 1,  12, 121
        n /= 10; //12, 1 , 0
    }
      
    return oldNum == newNum;
}  

int main()
{
    for(int i =0; i<=100; i++)
    {
        if(isSimetric(i*i))
        {
            cout << i << endl;
        }
    }
    return 0;
}