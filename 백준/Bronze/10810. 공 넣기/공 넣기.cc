#include <bits/stdc++.h>
using namespace std;

int n, m, a[105];
int i, j, k;

int main() {
    cin >> n >> m;
    for (int x = 1; x <= m; x++) {
        cin >> i >> j >> k;
        for (int y = i; y <= j; y++) {
            a[y] = k;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}