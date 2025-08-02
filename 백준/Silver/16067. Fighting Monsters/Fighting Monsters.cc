#include <bits/stdc++.h>
using namespace std;

int n, m;
map<int, vector<int>> monsters;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m;
        monsters[m].push_back(i);
    }

    if (monsters[1].size() >= 2) {
        cout << monsters[1][0] + 1 << " " << monsters[1][1] + 1 << "\n";
        return 0;
    }

    int m1 = 1, m2 = 1;
    do {
        m1 += m2;
        swap(m1,m2);
        if (monsters.count(m1) && monsters.count(m2))
        {
            cout << monsters[m1][0]+1 << " " << monsters[m2][0]+1 << "\n";
            return 0;
        }
    } while(m1 < monsters.rbegin() -> first);

    cout << "impossible" << "\n";
    return 0;
}
