// erkar
#include <iostream>
using namespace std;

void f(int arr[], int n)
{
    
        int f = 0, arr1[n];
        // 3rd amenapocry =>  k < 3
    for (int k = 0; k < 3; k++)
    {
        int t = arr[0];
        int amen = arr[0];

        // gtnenq amenamec elementy
        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] > t)
            {
                amen = arr[i + 1];
            }
        }
        // gtnenq amenapocr elementy
        for (int i = 0; i < n; i++)
        {
            if (arr[i + 1] < t)
            {
                t = arr[i + 1];
                // gtnenq amenapoqr elementi indexy
                t = i;
            }
        }

        
        // nor zangvacum hertov veragrenq amenapoqr elementnery
        arr1[f] = arr[t];
        // amenapoqr elementnerin tanq amenameci arjeqy
        arr[t] = amen;
        f++;
    }

    cout <<  arr1[f - 1];

    
}

int main()
{
    const int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    f(arr, n);

    return 0;
}