#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, temp, ret;
vector<int> v1;
vector<int> v2;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v1.push_back(temp);
    }

    for (int i = 0; i < n; i++) {
        cin >> temp;
        v2.push_back(temp);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<>());

    for (int i = 0; i < n; i++)
        ret += v1[i] * v2[i];

    cout << ret << "\n";
}