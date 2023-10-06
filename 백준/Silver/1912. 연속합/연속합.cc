#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, temp, sum, ret = -987654321;
vector<int> v;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += temp;
        ret = max(sum, ret);
        if (sum < 0)
            sum = 0;
    }
    cout << ret << '\n';
}