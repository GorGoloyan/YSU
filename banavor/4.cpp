#include <iostream>
using namespace std;

void igid(int arr[], int count)
{
   int arr1[count];
   int counter = 0;


   for (int i = 0; i < count - 1; i++)
   {
      int minIndex = i;
      int counter1 = 0;
      for (int j = i + 1; j < count; j++)
         if (arr[minIndex] < arr[j])
            counter1++;

      
      if (counter1 > counter)
         counter = counter1;
   }

   cout << counter;
}

int main()
{
   const int n = 6;
   int arr[n]{1, 5, 6, 1, 0, 6};

   igid(arr, n);
}