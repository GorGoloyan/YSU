#include <iostream>
using namespace std;


int main()
{  
    int n,m;
    char nshan;
    cin >> n >>  nshan >> m;

    switch(nshan)
    {
        case '+':
        cout << n + m;
        break;

        case '-':
        cout << n - m;
        break;

        case '*':
        cout << n * m;
        break;

        case '/':
        cout << n / m;
        break;

        default:
        cout << "անծանոթ նշան";
        break;


    }

    

    
    return 0;
}