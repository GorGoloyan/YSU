#include <iostream>
using namespace std;

void recursion(int arr[], int last_idx)
{
    if(last_idx == 0)
    {   
        cout << arr[last_idx];
        return;
    }   
    cout << arr[last_idx];
    return recursion(arr, last_idx - 1);
}

int main () 
{
    const int size = 4;
    int arr[size];
    
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    recursion(arr, size - 1);
    
    return 0;
}