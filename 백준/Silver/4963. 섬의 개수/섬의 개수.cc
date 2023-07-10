#include <bits/stdc++.h>
using namespace std;

const int dir[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1},
                       {1, -1},  {1, 0},  {1, 1}

};

int w, h, cnt, a[54][54], visited[54][54];

void dfs(int y, int x) {
    if (visited[y][x])
        return;
    visited[y][x] = 1;
    for (int i = 0; i < 8; i++) {
        int ny = y + dir[i][0];
        int nx = x + dir[i][1];
        if (ny < 0 || ny >= h || nx < 0 || nx >= w || visited[ny][nx])
            continue;
        if (a[ny][nx])
            dfs(ny, nx);
    }
}

int main() {
    while (1) {
        cnt = 0;
        memset(visited, 0, sizeof(visited));
        cin >> w >> h;

        if (w == 0 && h == 0)
            return 0;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (!visited[i][j] && a[i][j] == 1) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
    }
}