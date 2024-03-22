#include <iostream>
#include <cstring>
#include <string>
using namespace std;

string f(int a)
{
    string s;
    if(a == 0){
        s = "";
    } else if(a == 1){
        s = "one ";
    } else if(a == 2){
        s = "two ";
    } else if(a == 3){
        s = "three ";
    } else if(a == 4){
        s = "four ";
    } else if(a == 5){
        s = "five ";
    } else if(a == 6){
        s = "six ";
    } else if(a == 7){
        s = "seven ";
    } else if(a == 8){
        s = "eight ";
    } else if(a == 9){
        s = "nine ";
    }

    return s;
}

int main()
{
    int n;
    cin >> n;
    string s;
    int a[6];
    int i = 0;

    while(n > 0) {
        a[i] = n % 10;
        n /= 10;
        ++i;
    }

    for(int j = i - 1; j >= 0; --j){
        if (j == 5)
        {
            s += f(a[j]) + "hundred thousand ";
        } else if (j == 4)
        {
            s += f(a[j]) + "ten thousand ";
        } else if (j == 3)
        {
            s += f(a[j]) + "thousand ";
        } else if (j == 2)
        {
            s += f(a[j]) + "hundred ";
        } else if (j == 1)
        {
            s += f(a[j]) + "ten ";
        } else if (j == 0)
        {
            s += f(a[j]);
        }
    }

    cout << s;

    return 0;
}