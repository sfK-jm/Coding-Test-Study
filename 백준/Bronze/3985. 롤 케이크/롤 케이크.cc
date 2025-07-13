#include <bits/stdc++.h>
using namespace std;

int l, n, first, second, temp, p, k;
int arr[1004];
int cnt[1004];

int main() {
     cin >> l >> n;

     for (int i = 1; i <= n; i++) {

          cin >> p >> k;
          
          if (temp < k - p) {
               temp = k - p;
               first = i;
          }

          for (int j = p; j <= k; j++) {
               if (arr[j] == 0) {
                    arr[j] = i;
                    cnt[arr[j]]++;
               }
          }
     }

     int ans = 0;
     for (int i = 1; i <= l; i++) {
          if (ans < cnt[i]) ans = cnt[i];
     }

     for (int i = 1; i <= l; i++) {
          if (ans == cnt[i]) {
               second = i;
               break;
          }
     }

     cout << first << "\n" << second <<"\n";

}