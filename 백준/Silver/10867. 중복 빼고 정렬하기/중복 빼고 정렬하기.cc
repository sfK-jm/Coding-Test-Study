#include <bits/stdc++.h>
using namespace std;

int n, temp, lastNumber = -1;
vector<int> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i: v) {
        if (lastNumber == i) {
            continue;
        }
        lastNumber = i;
        cout << i << " ";
    }

}