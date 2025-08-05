#include <bits/stdc++.h>
using namespace std;

int x, m;

int main() {
    cin >> x >> m;
    for (int n = 1; n < m; n++) {
        if ((x * n) % m == 1) {
            cout << n << "\n";
            return 0;
        }
    }

    cout << "No such integer exists.\n";
}