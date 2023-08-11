#include <bits/stdc++.h>
using namespace std;

int n, x, temp;
vector<int> s;

int main() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp < x)
            s.push_back(temp);
    }

    for (int i : s) {
        cout << i << " ";
    }
}