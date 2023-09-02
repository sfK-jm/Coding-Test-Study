#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, realtime, a, b;
vector<pair<int, int>> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end());

    realtime = v[0].first + v[0].second;

    for (int i = 1; i < v.size(); i++) {
        realtime = max(realtime, v[i].first);
        realtime += v[i].second;
    }
    cout << realtime << '\n';
}