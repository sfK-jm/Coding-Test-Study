#include <bits/stdc++.h>
using namespace std;

int n, k, cnt = 0;
vector<int> v;

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            cnt++;
        }
    }
    if (cnt < k)
        cout << 0;
    else
        cout << v[k - 1];
}