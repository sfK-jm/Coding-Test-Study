#include <bits/stdc++.h>
using namespace std;

char a[21][21];
int R, C, ret, visited[30];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void go(int y, int x, int cnt) {
    ret = max(ret, cnt);
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= R || nx < 0 || nx >= C)
            continue;

        int next = (int)(a[ny][nx] - 'A');

        if (visited[next] == 0) {
            visited[next] = 1;
            go(ny, nx, cnt + 1);
            visited[next] = 0;
        }
    }
}

int main() {
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> a[i][j];
        }
    }
    visited[(int)a[0][0] - 'A'] = 1;
    go(0, 0, 1);
    cout << ret << '\n';
    return 0;
}