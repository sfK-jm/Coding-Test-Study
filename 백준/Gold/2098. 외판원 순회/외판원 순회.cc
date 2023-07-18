#include <bits/stdc++.h>
using namespace std;

#define INF 987654321
#define MAX 20

int n, a[MAX][MAX];
int dp[MAX][1 << MAX];

/// @brief dfs함수
/// @param cur 현재 도시
/// @param visit  지금까지 방문한 도시
/// @return 순회에 필요한 최소비용
int dfs(int cur, int visit) {

    if (visit == (1 << n) - 1) {
        if (a[cur][0] == 0) // 이동 불가능
            return INF;
        return a[cur][0];
    }

    if (dp[cur][visit] != -1) // 이미 탐색했을 경우
        return dp[cur][visit];

    dp[cur][visit] = INF;

    for (int i = 0; i < n; i++) {
        if (a[cur][i] == 0) // 길이 없을때
            continue;
        if ((visit & (1 << i)) == (1 << i)) // 이미 방문했을 경우
            continue;

        // dp[현재도시][방문한 도시(비트마스크)]
        dp[cur][visit] =
            min(dp[cur][visit], a[cur][i] + dfs(i, visit | 1 << i));
    }
    return dp[cur][visit];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    memset(dp, -1, sizeof(dp));
    cout << dfs(0, 1) << "\n";
}