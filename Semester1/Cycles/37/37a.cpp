#include <iostream>
using namespace std;

int main()
{
    const int size = 100;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
            break;
        arr[i] = tmp;
    }
}