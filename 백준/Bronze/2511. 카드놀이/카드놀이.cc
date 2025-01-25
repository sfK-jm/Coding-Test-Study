#include <bits/stdc++.h>
using namespace std;

int a[11];
int scoreA = 0, scoreB = 0;
char lastWin = 'D';


int main() {
     // a입력
     for (int i = 0; i < 10; i++) cin >> a[i];
     
     // b입력과 동시에 a와 비교
     for (int i = 0, b; i < 10; i++) {
          cin >> b;
          if (a[i] == b) scoreA++, scoreB++;
          else if (a[i] > b) scoreA += 3, lastWin='A';
          else if (a[i] < b) scoreB += 3, lastWin='B';
     }

     cout << scoreA << ' ' << scoreB << "\n";
     if (scoreA > scoreB) cout << 'A';
     else if (scoreA < scoreB) cout << 'B';
     else if (scoreA == scoreB) cout << lastWin;

}