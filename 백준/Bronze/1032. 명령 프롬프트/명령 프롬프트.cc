#include <bits/stdc++.h>
using namespace std;

int n;
char a[54];
string str = "";

int main() {
     cin >> n;
     cin >> str;

     for (int i = 0; i < str.length(); i++) a[i] = str[i];

     for (int i = 0; i < n - 1; i++) {
          cin >> str;
          for (int j = 0; j < str.length(); j++) {
               if (a[j] != str[j]) a[j] = '?';
          }
     }
     for (int i = 0; i < str.length(); i++) cout << a[i];
     
}