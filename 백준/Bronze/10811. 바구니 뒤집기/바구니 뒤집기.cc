#include <bits/stdc++.h>
using namespace std;

int n, m;
int x, y;
int a[105];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        a[i] = i;

    while (m--) {
        cin >> x >> y;

        for (int i = 0; i <= (y - x) / 2; i++) {
            swap(a[x + i], a[y - i]);
        }
    }

    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}