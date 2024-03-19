#include <iostream>
#include <cstring>
using namespace std;
// strcmp(x,y)- hamematum a ete x-y > 0
//  այն բառերը, որոնք այբբենական կարգով ավելի մեծ են
//  իրենց նախորդ բառից և ավելի փոքր են իրենց հաջորդ
//  բառից,

int main()
{
    char arr[351] = {"aag, aab, aac, ad, az"};
    // cin.getline(arr, 350, '.');
    int counter = 1;
    for (int i = 0; i < strlen(arr); i++)
        if (arr[i] == ',')
            counter++;

    char *p = strtok(arr, ",");
    char **matrix = new char *[counter];
    matrix[0] = p;

    for (int i = 1; i < counter; i++)
    {
        matrix[i] = strtok(NULL, ",");
    }

    for (char i = 1; i < counter - 1; i++)
    {
        if ((strcmp(matrix[i], matrix[i - 1]) > 0) && (strcmp(matrix[i], matrix[i + 1]) < 0))
            cout << matrix[i] << '\t';
    }
}