// 2579
// 계단을 밟으면 그 계단의 점수 획득
// 계단은 한 번에 한 계단씩 또는 두 계단씩 오를 수 있다.
// 연속된 세 개의 계단을 밟을 수 없음
// 마지막 도착 계단은 반드시 밟아야 함

// 1번 계단 밟는 경우: 1
// 2번 계단 밟는 경우: 1-2
// 3번 계단 밟는 경우: 1-3, 2-3
// 4번 계단 밟는 경우: 1-2-4, 1-3-4, 2-4
// 5번 계단 밟는 경우: 1-2-4-5, 1-3-5, 2-3-5

// dp[n] = (dp[n-2] + map[n]) or (dp[n-3] + map[n-1] + map[n])

#include <iostream>
using namespace std;

// n: 계산의 개수
int n;
int map[303];
int dp[303];

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> map[i];
    }

    dp[1] = map[1];
    dp[2] = map[1] + map[2];
    dp[3] = max((map[1] + map[3]), (map[2] + map[3]));

    for (int i = 4; i <= n; i++) {
        int x = dp[i - 2] + map[i];
        int y = dp[i - 3] + map[i - 1] + map[i];
        dp[i] = max(x, y);
    }
    cout << dp[n] << "\n";
}