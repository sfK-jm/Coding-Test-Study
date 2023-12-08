// 11727
// 2×n 직사각형을 1×2, 2×1과 2×2 타일로 채우는 방법의 수를 구하는 프로그램
// 출력값: 10,007로 나눈 나머지를 출력

// n = 1 -> 1
// n = 2 -> 3
// n = 3 -> 5
// n = 4 -> 11

// n[i] -> (n[i-2] * 2) + n[i-1]

#include <iostream>
#define MOD 10007;
using namespace std;

int n;
int dp[1003];

int main() {
    cin >> n;
    dp[1] = 1;
    dp[2] = 3;
    dp[3] = 5;
    for (int i = 4; i <= n; i++)
        dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % MOD;

    cout << dp[n] << "\n";
}