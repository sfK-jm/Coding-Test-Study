// 백준 9095
// 정수 n이 주어졌을 때, n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는
// 프로그램을 작성

// d[1] = 1
// d[2] = 2
// d[3] = 4
// d[4] = 7
// d[5] = 13 (7 + 4 + 2)

// 점화식
// d[n] = d[n - 1] + d[n - 2] + d[n - 3]

#include <iostream>
using namespace std;

int t, n;
int dp[13];

int main() {
    cin >> t;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 4; i < 11; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << dp[n] << '\n';
    }
}