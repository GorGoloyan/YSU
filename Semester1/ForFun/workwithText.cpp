#include <iostream>
using namespace std;

// char arr[] = {'h', 'o', 'l', 'a' 0 or '\0'}

int main()
{
    cout << "what is u name?" << '\n';
    char a[100];
    cin >> a;
    cout << "you name is " << a << '\n'
         << " i love you!!!";
    return 0;
}