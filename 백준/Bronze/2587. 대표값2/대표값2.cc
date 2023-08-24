#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int temp, avg = 0;

int main() {
    for (int i = 0; i < 5; i++) {
        cin >> temp;
        v.push_back(temp);
        avg += temp;
    }
    cout << avg / 5 << '\n';
    sort(v.begin(), v.end());
    cout << v[2] << '\n';
}