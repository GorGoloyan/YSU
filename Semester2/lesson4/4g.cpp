#include <iostream>

using namespace std;

bool f(int a) {
 while (a) {
   if (a % 10 == 0) {
     return false;
   }
   a /= 10;
 }
 return true;
}

int main() {
 const int n = 4;
 const int m = 3;

 int a[n][m];

 for (int i = 0; i < n; i++) {
   for (int j = 0; j < m; j++) {
     cin >> a[i][j];
   }
 }

 int b[n] = { 0 };

 for (int i = 0; i < n; i++) {
   int p = 1;
   for (int j = 0; j < m; j++) {
     if (f(a[i][j])) {
       p *= a[i][j];
     }
   }
   b[i] = p;
   cout << b[i] << ' ';
 }


 return 0;
}
