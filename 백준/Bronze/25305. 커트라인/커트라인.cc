#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int n, k, temp;

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end(), greater<>());
    cout << v[k - 1];
}