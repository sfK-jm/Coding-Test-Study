#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

ll n, t, num, half; 
unordered_map<ll, int> m;
ll maxNum = -987654321, maxFreq = 0;


void init() {
     m.clear();
     maxNum = -987654321;
     maxFreq = 0;
}

int main() {
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);

     cin >> n;

     while (n--) {
          init();

          cin >> t;

          for (int i = 0; i < t; i++) {
               cin >> num;
               m[num]++;

               if (m[num] > maxFreq) {
                    maxFreq = m[num];
                    maxNum = num;
               }
          }

          half = t / 2;
          
          if (maxFreq > half) {
               cout << maxNum << "\n";
          } else {
               cout << "SYJKGW" << "\n";
          }
     }
     
}
