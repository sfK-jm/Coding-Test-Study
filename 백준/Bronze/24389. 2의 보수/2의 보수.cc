#include <bits/stdc++.h>
using namespace std;

int n, _n, cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    _n = -n;

    for (int i = 0; i < 32; i++) {
        // 맨 아래자리 비교
        if ((_n & 1) != (n & 1))
            cnt++;
        n >>= 1, _n >>= 1;
    }
    cout << cnt << "\n";
}