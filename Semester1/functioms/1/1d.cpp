#include <iostream>
using namespace std;

unsigned f_pow(unsigned x, unsigned n)
{
    int res = 1;
    while (n)
    {
        res *= x;
        n--;
    }
    return res;
}

int getLen(int n)
{
    int len = 0;

    while (n > 0)
    {

        n /= 10;
        len++;
    }
    return len;
}

int countZuygInNum(int n)
{
    int index = 0;
    int maxDig = 0;
    int len = getLen(n);

    for (int i = 0; i < len; i++)
    {
        int digit = (n % f_pow(len - i, 10)) % 10;
        if (digit > maxDig && digit % 2 == 0)
        {
            maxDig = digit;
            index = i;
        }
    }

    return index;
}

int main()
{
    int n;
    cin >> n;
    cout << countZuygInNum(n);

    return 0;
}
