#include <iostream>
using namespace std;

void hanoi(int n, int i, int k)
{
    if (n == 1)
        cout << "move disk 1 from " << i << " to " << k << endl;
    else
    {
        int tpm = 6 - k - i;
        hanoi(n - 1, i, tpm);
        cout << "move disk " << n << " from " << i << " to " << k << endl;
        hanoi(n - 1, tpm, k);
    }
}

int main()
{
    hanoi(3, 1, 2);
    return 0;
}