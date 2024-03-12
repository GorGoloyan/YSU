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

 double** a1 = new double* [2 * n];

 for (int i = 0; i < 2 * n; i++) {
   a1[i] = new double[m];
 }

 int k = 0;

 for (int i = 0; i < 2 * n; i += 2) {
   for (int j = 0; j < m; j++) {
     a1[i][j] = a[k][j];
     a1[i + 1][j] = a[k][j] * a[k][j];
   }
   k++;
 }

 swap(a, a1);


 delete[] a1;

 for (int i = 0; i < 2 * n; i++) {
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