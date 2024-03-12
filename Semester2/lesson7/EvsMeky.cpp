#include <iostream>
#include <cstring>
using namespace std;
// strlen - toxi erkarwutyun chi hashvum \0
// strcpy.s(x,y) - y x-i mej copy
// strcat(x,y) - miacnwum a veragrum x-in
// strcmp(x,y)- hamematum a ete x-y mec a ver x - y

int main()
{
    char x[10];
    cin >> x;
    int i;
    for (i = 0; x[i] !='\0';++i)
    
    cout << i <<endl;
    cout << strlen(x);
    return 0;
    
}