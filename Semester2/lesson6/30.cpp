//30
#include <iostream>
using namespace std;

int f(int a, int b) {
 if (!b) {
   return a;
 }
 return f(b, a % b);
}

int max(int a[], int n, int(*d) (int, int)) {
 int max = 0;
 int sum = 0;
 for (int i = 0; i < n - 1; i++) {
   for (int j = i + 1; j < n; j++) {
     sum = 0;
     for (int k = i; k <= j; k++) {
       sum += d(a[i], a[k]) * d(a[k], a[j]);
     }
     if (max < sum) {
       max = sum;
     }
   }
 }
 return max;
}

int main() {
 const int n = 4;

 int a[n];

 for (int i = 0; i < n; i++) {
   cin >> a[i];
 }

 cout << max(a, n, f) << endl;

 return 0;
}
