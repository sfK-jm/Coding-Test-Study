#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> v;
int temp;

int main() {
    for (int i = 0; i < 3; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    cout << v[1] << "\n";
}