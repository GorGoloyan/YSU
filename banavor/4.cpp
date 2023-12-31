//18 ej 73

#include <iostream>
using namespace std;

int main()
{
    const int n = 6;
    int arr[n];
    int arr1[n];


    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

for(int t = 0; t < n; t++)
{
        int counter = 0;

    for(int i = t; i < n; i++)
    {
        if ( arr[i] < arr [i+1])
        {
            counter++;
        }

    }

     arr1[t] = counter;

}
            int r = arr1[0];

    for(int t = 1; t < n; t++)
    {
        if( r  <  arr1[t])
        {
            r = arr1[t];
        }
    }
    
        cout << r;
    return 0;
}