#include <bits/stdc++.h>
using namespace std;

int n, a[24][24], visited[21], team1[10], team2[10];
int ret = 987654321;

void go() {
    int size1 = 0, size2 = 0;
    for (int i = 0; i < n; i++) {
        if (!visited[i])
            team1[size1++] = i;
        else
            team2[size2++] = i;
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = i + 1; j < n / 2; j++) {
            sum1 += a[team1[i]][team1[j]] + a[team1[j]][team1[i]];
            sum2 += a[team2[i]][team2[j]] + a[team2[j]][team2[i]];
        }
    }
    if (ret > abs(sum1 - sum2))
        ret = abs(sum1 - sum2);
}

void dfs(int cnt, int cur) {
    if (cnt == (n / 2)) {
        go();
        return;
    }

    for (int i = cur; i < n; i++) {
        visited[i] = 1;
        dfs(cnt + 1, i + 1);
        visited[i] = 0;
    }
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

    dfs(0, 0);

    cout << ret;
}