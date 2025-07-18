#include <bits/stdc++.h>
using namespace std;

int n, l, temp;
vector<int> v;

int main() {
    cin >> n >> l;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i: v) {
        if (l < i) {
            break;
        }
         l++;
    }

    cout << l << "\n";

}
