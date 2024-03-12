#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char arr[200];
    cin.getline(arr, 60, '\n');

    for (char i = 'a'; i <= 'z'; ++i)
    {
        for (int j = 0; j < strlen(arr); ++j)
        {
            if (arr[j] == i)
            {
                cout << arr[j];
            }
        }
        
    }

    return 0;
}