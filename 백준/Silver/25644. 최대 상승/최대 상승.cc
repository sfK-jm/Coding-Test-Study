#include <bits/stdc++.h>
using namespace std;

int n, input, ret, maxNum = - 1;
vector<int> v;

int main() {
    cin >> n;
    for (int i = 0; i <n; i++) {
        cin >> input;
        v.push_back(input);
    }

    for (int i = v.size()-1; i >= 0; i--) {
        if (v[i] > maxNum) maxNum = v[i];
        ret = max(ret, maxNum - v[i]);
    }

    cout << ret << "\n";
}