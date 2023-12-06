// 1932
//         7
//       3   8
//     8   1   0
//   2   7   4   4
// 4   5   2   6   5

// 맨 위층 7부터 시작해서 아래에 있는 수 중 하나를 선택하여 아래층으로 내려올때,
// 이제까지 선택된 수의 합이 최대가 되는 경로를 구하는 프로그램을 작성하라.
// 아래층에 있는 수는 현재 층에서 선택된 수의 대각선 왼쪽 또는
// 대각선 오른쪽에 있는 것 중에서만 선택할 수 있다.

#include <algorithm>
#include <iostream>
using namespace std;

int arr[503][503];
int dp[503][503];
int n, ret = 0;

int main() {
    cin >> n;
    // 맵 입력
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> arr[i][j];
        }
    }

    dp[1][1] = arr[1][1];

    // 2번부터 끝까지 반복 (세로)
    for (int i = 2; i <= n; i++) {
        // (가로)
        for (int j = 1; j <= i; j++) {
            // 대각선 왼쪽, 오른쪽 중 큰것 + 현재 값
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
        }
    }

    // 최하단에 있는 수 중에 가장 큰거 찾기
    for (int i = 1; i <= n; i++) {
        if (ret < dp[n][i])
            ret = dp[n][i];
    }
    cout << ret << "\n";
}