// 2156 c++
// 3잔 연속 x

#include <algorithm>
#include <iostream>
using namespace std;

int n;
long long a[10003];
long long dp[10003];

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    dp[1] = a[1];
    dp[2] = a[1] + a[2];

    for (int i = 3; i <= n; i++) {
        // 1. i-3, i-1, i번째를 마신다.
        // 2. i-2번째를 마시고 i번째를 마신다.
        // 3. i-1번째를 마시고 i번째를 마시지 않는다.

        dp[i] = max({dp[i - 3] + a[i - 1] + a[i], dp[i - 2] + a[i], dp[i - 1]});
    }

    cout << dp[n] << "\n";
}