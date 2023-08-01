#include <bits/stdc++.h>
using namespace std;

int t, n, x;
string p, order;

int main() {
    cin >> t;

    for (int i = 0; i < t; i++) {
        deque<int> d;
        
        cin >> p >> n >> order;
        x = 0;
        
        for (char c : order) {
            if (c == '[' || c == ']')
                continue;
            // 숫자가 나오면 현재 수 * 10 한 뒤 더함
            if (c >= '0' && c <= '9')
                x = x * 10 + c - '0';
            // 숫자가 아닐 경우 현재 수를 데큐에 넣음
            else {
                if (x > 0)
                    d.push_back(x);
                x = 0;
            }
        }
        if (x > 0)
            d.push_back(x);

        bool error = false, rev = false;

        for (char c : p) {
            if (c == 'R')
                rev = !rev;
            else {
                if (d.empty()) {
                    error = true;
                    break;
                }
                if (rev)
                    d.pop_back();
                else
                    d.pop_front();
            }
        }
        // 에러가 발생한 경우
        if (error)
            cout << "error" << '\n';
        else {
            cout << "[";
            if (rev)
                reverse(d.begin(), d.end());
            for (int j = 0; j < d.size(); j++) {
                cout << d[j];
                if (j < d.size() - 1)
                    cout << ",";
            }
            cout << "]\n";
        }
    }
}