// function arjeqneri poxum a texerov
#include <iostream>
using namespace std;

void foo(int *pa, int *pb)
{
    int pTmp = *pa;
    *pa = *pb;
    *pb = pTmp;
}

int main()
{
    int a = 7;
    int b = 9;
    int *pA = &a;
    int *pB = &b;

    foo(pA, pB);

    cout << a << '\t'<< b;

    return 0;
}