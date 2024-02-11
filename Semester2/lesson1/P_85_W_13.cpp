#include <iostream>
using namespace std;

void maxmin(int num, int &max, int &min)
{   
    int num1 = num;
    max = num % 10;
    while (num != 0)
    {
        num /= 10;
        if (max < num % 10)
            max = num % 10;
    }

    min = num1 % 10;
    while (num1 > 9)
    {
        num1 /= 10;
        if (min > num1 % 10)
            min = num1 % 10;
    }
}

int main()
{
    int num;
    cin >> num;
    int max, min;
    maxmin(num, max, min);
    cout << "max = " << max << endl;
    cout << "min = " << min << endl;
}