#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[60];
    cin.getline(s, 60);
    int n = strlen(s);
    char s1[60];
    int j = 0;
    for(int i = 0; i < n; )
    {
        if((s[i + 1] - s[i] == 1) && (i < n))
        {
            while(s[i + 1] - s[i] == 1) 
            {
                ++i;
            }
             ++i;
        }
       
        else
        {
            s1[j++] = s[i++];
        }
    }
    cout << s1;
    return 0;
}