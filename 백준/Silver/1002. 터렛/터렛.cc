#include <bits/stdc++.h>
using namespace std;

int main() {
     int t, x1, y1, r1, x2, y2, r2, ret;
     double d;
     
     cin >> t;
     for (int i = 0; i < t; i++) {
          cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

          d = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

          if (d == abs(r1 - r2) && d != 0) ret = 1;           // 내접
          else if (d == r1 + r2) ret = 1;                     // 외접
          else if (d < abs(r1 - r2)) ret = 0;                 // 한 원이 다른 원을 포함하는 경우
          else if (d < r1 + r2 && d > abs(r1 - r2)) ret = 2;  // 두 점에서 만나는 경우
          else if (d > r1 + r2) ret = 0;                      // 만나지 않는 경우
          else if (d == 0 && r1 == r2) ret = -1;              // 두 원이 일치하는 경우

          cout << ret << "\n";
     }
}