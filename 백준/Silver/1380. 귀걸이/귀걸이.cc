#include <bits/stdc++.h>
using namespace std;

int cnt, n, num;
char c;
string s;

int main() {
     for (cnt = 1; ; cnt++) {
          cin >> n;
          if (!n) break;
         
          vector<string> v;
          unordered_map<int, int> m;
          
          v.push_back("blank");
          cin.ignore();

          for (int i = 1; i <= n; i++) {
               getline(cin, s);
               m[i] = 2;
               v.push_back(s);
          }

          for (int i = 0; i < 2 * n - 1; i++) {
               cin >> num >> c;
               m[num]--;        
          }

          for (auto a : m) {
               if (a.second) cout << cnt << " " << v[a.first] << "\n";
          }

     }
     
}