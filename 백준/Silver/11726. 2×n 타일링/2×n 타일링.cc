// 11726

// 가로(n) 1 2 3 4 5
// 방법 수  1 2 3 5 8

#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> dp;

int main() {
    cin >> n;
    dp.push_back(1);
    dp.push_back(2);

    for (int i = 2; i < n; i++) {
        dp.push_back((dp[i - 1] + dp[i - 2]) % 10007);
    }

    cout << dp[n - 1];
}