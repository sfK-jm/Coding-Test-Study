#include <bits/stdc++.h>
using namespace std;

int n, ret = 987654321;

struct food {
    int s;
    int b;
} a[15];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].s >> a[i].b;
    }

    for (int i = 1; i < (1 << n); i++) {
        int x = 1, y = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                x *= a[j].s;
                y += a[j].b;
            }
        }
        ret = min(ret, abs(x - y));
    }
    cout << ret << "\n";
    return 0;
}