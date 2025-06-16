#include <bits/stdc++.h>
using namespace std;

int n, m, input, right_idx, left_idx; 
int ret = 0;
deque<int> dq;

int main() {
     cin >> n >> m;
     for (int i = 1; i <= n; i++) {
          dq.push_back(i);
     }

     while (m--) {
          cin >> input;

          for (int i = 0; i < dq.size(); i++) {
               if (dq[i] == input) {
                    left_idx = i;
                    right_idx = dq.size() - i;
               }
          }

          if (left_idx <= right_idx) {
               while (true) {
                    if (dq.front() == input) {
                         dq.pop_front();
                         break;
                    }

                    dq.push_back(dq.front());
                    dq.pop_front();
                    ret++;
               }
          } else {
               ret++;
               while (true) {
                    if (dq.back() == input) {
                         dq.pop_back();
                         break;
                    }

                    dq.push_front(dq.back());
                    dq.pop_back();
                    ret++;
               }
          }
     }
     cout << ret << "\n";
}