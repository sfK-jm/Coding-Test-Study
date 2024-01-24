#include <iostream>
#include <queue>
using namespace std;

int tomatoBox[103][103][103];
int dist[103][103][103];
int m, n, h; // 가로 세로 높이
int res = 0;
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
queue<pair<pair<int, int>, int>> q;

void bfs() {
    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();

        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h)
                continue;

            // dist가 양수일때 continue
            if (dist[nx][ny][nz] >= 0)
                continue;

            q.push({{nx, ny}, nz});
            dist[nx][ny][nz] = dist[x][y][z] + 1;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n >> h;
    for (int k = 0; k < h; k++) {         // 높이만큼 반복
        for (int i = 0; i < n; i++) {     // 세로만큼 반복
            for (int j = 0; j < m; j++) { // 가로만큼 반복
                cin >> tomatoBox[i][j][k];
                if (tomatoBox[i][j][k] == 1) // 토마토일경우
                    q.push({{i, j}, k});
                else if (tomatoBox[i][j][k] == 0)
                    dist[i][j][k] = -1;
            }
        }
    }

    bfs();

    // 전체를 돌면서 dist중 가장 큰 값을 찾는다.
    for (int k = 0; k < h; k++) {         // 높이만큼 반복
        for (int i = 0; i < n; i++) {     // 세로만큼 반복
            for (int j = 0; j < m; j++) { // 가로만큼 반복
                if (dist[i][j][k] == -1) {
                    cout << "-1\n";
                    return 0;
                } else {
                    res = max(dist[i][j][k], res);
                }
            }
        }
    }

    cout << res << "\n";
    return 0;
}