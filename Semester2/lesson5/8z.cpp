#include <iostream>

using namespace std;

int main() {
 int n, m;

 cin >> n >> m;

 double** a = new double* [n];

 for (int i = 0; i < n; i++) {
   a[i] = new double[m];
 }

 for (int i = 0; i < n; i++) {
   for (int j = 0; j < m; j++) {
     cin >> a[i][j];
   }
 }

 double min = a[0][0];

 for (int i = 0; i < n; i++) {
   for (int j = 0; j < m; j++) {
     if (min > a[i][j]) {
       min = a[i][j];
     }
   }
 }

 

 for (int i = 0; i < n; i++) {
   bool k = 0;
   for (int j = 0; j < m; j++) {
     if (a[i][j] == min) {
       k = 1;
       break;
     }
   }
   if (k) {
     double* q = a[i];
     for (int j = i; j < n - 1; j++) {
       a[j] = a[j + 1];
     }

     a[n - 1] = q;
     delete[] a[n - 1];
     n--;
     i--;
   }
 }

 for (int i = 0; i < n; i++) {
   cout << endl;
   for (int j = 0; j < m; j++) {
     cout << a[i][j] << ' ';
   }
 }

 for (int i = 0; i < n; i++) {
   delete[] a[i];
 }

 delete[] a;


 return 0;
}
