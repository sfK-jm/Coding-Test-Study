#include <bits/stdc++.h>
using namespace std;

int n, k;
double a[100004];

int main() {
     cin >> n >> k;
     for (int i = 0; i < n; i++) { cin >> a[i]; }
     sort(a, a + n);

     double sum = 0;
     for (int i = k; i < n - k; i++) sum += a[i];
     double avg = sum / (n - (2 * k));

     // 소숫점 3번째에서 반올림
     printf("%.2f\n", floor(avg * 100 + 0.5) / 100);

     for (int i = 0; i < k; i++) {
          a[i] = a[k];
          a[n-i-1] = a[n-k-1];
     }
     sum = 0;
     for (int i = 0; i < n; i++) sum += a[i];
     avg = sum / n;
     printf("%.2f\n", floor(avg * 100 + 0.5) / 100);
}