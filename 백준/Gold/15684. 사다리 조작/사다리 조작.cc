#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int n, m, h, a, b, ret = INF, visited[35][35];

bool check() {
    for (int i = 1; i <= n; i++) {
        int start = i;
        for (int j = 1; j <= h; j++) {
            if (visited[j][start])
                start++;
            else if (visited[j][start - 1])
                start--;
        }
        if (start != i)
            return false;
    }
    return true;
}

void go(int here, int cnt) {
    if (cnt > 3 || cnt >= ret)
        return;
    if (check()) {
        ret = min(ret, cnt);
        return;
    }
    for (int i = here; i <= h; i++) {
        for (int j = 1; j <= n; j++) {
            // 사다리가 연속으로 연결되어있는지 확인
            if (visited[i][j] || visited[i][j - 1] || visited[i][j + 1])
                continue;
            visited[i][j] = 1;
            go(i, cnt + 1);
            visited[i][j] = 0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // n: 세로선 m: 가로선 h: 세로선마다 가로선을 놓을 수 있는 위치의 개수
    cin >> n >> m >> h;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        visited[a][b] = 1;
    }
    go(1, 0);
    cout << ((ret == INF) ? -1 : ret) << "\n";
    return 0;
}