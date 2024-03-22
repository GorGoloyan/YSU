#include <iostream>
#include <cmath>
using namespace std;
// 1Պետություն,քաղաք,փողոց,տան համար
// Արտածել նրանք,որոնք Հայաստանի հասցեներ են

struct adress
{
    char country[100];
    char city[100];
    char streat[100];
    int house;
};

int main()
{
    const int n = 2;
    adress arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].country >> arr[i].city >> arr[i].streat >> arr[i].house;
    }

    
}