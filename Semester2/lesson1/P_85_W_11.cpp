#include <iostream>
using namespace std;

void col(int &day, int &month, int &year)
{
    if(day != 1)
    cout << day - 1 <<"/"<<month<<"/"<<year;
    if(day == 1)
    cout << 30 <<"/"<<month - 1<<"/"<<year;
}

int main()
{
    int day, month, year;
    cin >> day >> month >> year;
    col(day, month, year);
}