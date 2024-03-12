#include <iostream>
using namespace std;

int main()
{
    const int tox = 3, syun = 3;
    float a[tox][syun];

    for (int i = 0; i < tox; i++)
    {
        for (int j = 0; j < syun; j++)
        {
            cin >> a[i][j];
        }
    }

    float m[syun];

    for (int i = 0; i < tox; i++)
    {
        float s = 0.0;
        for (int j = 0; j < syun; j++)
        {
            s += a[j][i];
        }
        m[i] = s / tox * 1.0;
    }

    for (int i = 0; i < syun; i++)
    {
        cout << m[i] << " ";
    }

    return 0;
}