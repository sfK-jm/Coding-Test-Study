#include <bits/stdc++.h>
using namespace std;

#define min m123
#define MAX 20

int n, min = -1;
int t[MAX], p[MAX];

void go(int idx, int money) {
    if (idx > n + 1)
        return;
    if (idx == n + 1) {
        min = max(min, money);
        return;
    }
    go(idx + t[idx], money + p[idx]); // idx날 일 수행
    go(idx + 1, money);               // idx날 일 패스
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i] >> p[i];
    go(1, 0);
    cout << min;
}