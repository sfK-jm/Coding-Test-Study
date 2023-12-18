#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, temp, ret;
vector<int> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (ret < v[i] * (n - i))
            ret = v[i] * (n - i);
    }
    cout << ret << "\n";
}