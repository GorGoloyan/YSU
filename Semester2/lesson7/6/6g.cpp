#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[41];
    cin.getline(s, 41);
    for(int i = 0; i < strlen(s); ++i)
    {
        if(s[i] == 't' && s[i + 1] == 'h')
        {
            for(int j = i; j < strlen(s); ++j)
            {
                s[j] = s[j + 2];
                s[j + 1] = s[j + 3];
            }
            if(i >= 1) i -= 2;
            else i--;
        }
    }
    cout << s;
    return 0;
}