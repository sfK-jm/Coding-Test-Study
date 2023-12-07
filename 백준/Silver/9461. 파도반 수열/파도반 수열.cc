// 9461

// P(1)부터 P(10)까지 첫 10개 숫자는 1, 1, 1, 2, 2, 3, 4, 5, 7, 9이다.
// N이 주어졌을 때, P(N)을 구하는 프로그램을 작성하시오.

// p1 = 1 | p2 = 1 | p3 = 1
// p4 = p1 + p2 || p5 = p2 + p3
// *** p(n) = p(n-3) + p(n-2) ***

#include <iostream>
using namespace std;

int t, n;
long long dp[103] = {
    0,
    1,
    1,
    1,
};

int main() {
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n;

        for (int j = 4; j <= n; j++) {
            dp[j] = dp[j - 3] + dp[j - 2];
        }
        cout << dp[n] << '\n';
    }
}