#include <bits/stdc++.h>
using namespace std;

int n, cnt;

int main() {
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        int min_ = 987654321;
        for (int j = 1; j * j <= i; j++) {
            int temp = i - (j * j);
            min_ = min(min_, dp[temp]);
        }
        dp[i] = min_ + 1;
    }
    cout << dp[n];
}
