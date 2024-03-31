// 22 ej 56
//Տրված n բնական թվի համար արտածել ֆիբոնաչիի հաջորդականության n-րդ անդամը:

 #include <iostream>
using namespace std;

int fib(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cout << "nermuceq index" << endl;
    cin >> n;
    cout << fib(n);
}

