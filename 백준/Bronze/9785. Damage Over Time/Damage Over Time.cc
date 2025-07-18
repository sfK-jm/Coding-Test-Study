#include <bits/stdc++.h>
using namespace std;

int n, m, maximumDot = 0, maximumDotTime = 101;

int main() {
    cin >> n >> m;
    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end(), greater<pair<int, int>>());

    for (int i = 0; i < m; i++) {
        maximumDot += v[i].first;
        maximumDotTime = min(maximumDotTime, v[i].second);
    }

    cout << maximumDot << " " << maximumDotTime << "\n";

}
