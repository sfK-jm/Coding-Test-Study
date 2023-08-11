#include <bits/stdc++.h>
using namespace std;

int n, m, i, j;
int a[105];

int main() {
    cin >> n >> m;
    for (int x = 1; x <= 105; x++) {
        a[x] = x;
    }

    for (int x = 1; x <= m; x++) {
        cin >> i >> j;
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for (int x = 1; x <= n; x++) {
        cout << a[x] << " ";
    }
}