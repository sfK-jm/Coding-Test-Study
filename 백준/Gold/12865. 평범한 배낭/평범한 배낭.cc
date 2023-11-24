#include <iostream>
using namespace std;

// n: 물품의 개수, k: 버틸 수 있는 무게
int n, k;
// w: 물건의 무게, v: 물건의 가치
int w[103], v[103];

// dp[i][j]: i번째 물건까지 고려했을 때, 배낭의 용량이 j일 때의 최대 가치
int dp[103][100003];

void solve() {
    // i는 현재 고려하고 있는 항목의 인덱스
    for (int i = 1; i <= n; i++) {
        // j는 현재 배낭의 용량
        for (int j = 1; j <= k; j++) {
            // 현재 항목을 배낭에 넣을 수 있는 경우
            if (j - w[i] >= 0) {
                // 현재 항목을 넣는 것과 넣지 않는 것 중에서 최대 가치를 선택
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            } else {
                /* 현재 항목을 배낭에 넣을 수 없는 경우, 이전 항목까지의
                 최대 가치를 그대로 사용 */
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
    }
    solve();
    cout << dp[n][k] << endl;
}