#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char arr[60];
    cin.getline(arr, 60, '\n');
    int size = strlen(arr);
    int counter = 1;

    for (int i = 1; i < strlen(arr); i++)
    {
        if ((arr[i] - arr[i - 1]) >= 0)
            counter++;
    }
    
    (counter == size) ? cout << "yes" : cout << " no ";

    return 0;
}