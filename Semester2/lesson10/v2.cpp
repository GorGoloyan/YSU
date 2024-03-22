#include <iostream>
#include <cmath>
using namespace std;

// 2.Մարզիկների համար
// Անուն,ազգանուն,սպորտաձև ծննդյան թիվը,մեդալ ունի թե չէ
// Արտածել այն մարզիկների տվյալները,ովքեր ունեն 2ից ավել մեդալ և 25ից փոքր են

struct sport
{
    char name[15];
    char Sname[25];
    char sportName[25];
    int arr1[3];
    int medals;
};

int main()
{
    const int n = 1;
    sport arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].Sname >> arr[i].sportName >> arr[i].medals;
        cin >> arr[i].arr1[0] >> arr[i].arr1[1] >> arr[i].arr1[2];
        if ((arr[i].medals > 2 )&& ((2024 - arr[i].arr1[0]) <= 25))
        {
            cout << "name " << arr[i].name << '\t' << "Sname " << arr[i].Sname << '\t' << "sportName " << arr[i].sportName << '\t' << "medals " << arr[i].medals;
            cout << "year " << arr[i].arr1[0] << '\t' << "manth " << arr[i].arr1[1] << '\t' << "day " << arr[i].arr1[2];
        }
    }
}