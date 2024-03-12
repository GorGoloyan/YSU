#include <iostream>

using namespace std;

int main() {
 const int n = 5;

 double a[n][n];

 for (int i = 0; i < n; i++) {
   for (int j = 0; j < n; j++) {
     cin >> a[i][j];
   }
 }

 double max = a[0][n - 2];

 for (int i = 0; i < n; i++) {
   for (int j = 0; j < n; j++) {
     if (i + j == n - 2 || i + j == n) {
       if (max < a[i][j]) {
         max = a[i][j];
       }
     }
   }
 }

 cout << max << endl;

 return 0;
}