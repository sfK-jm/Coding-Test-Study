#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int n, cnt;
string s;

char a[104][104];
int visited[104][104];

void dfs(int y, int x) {
    if (visited[y][x]) {
        return;
    }
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= n || nx < 0 || nx >= n || visited[ny][nx])
            continue;

        if (!visited[ny][nx] && a[ny][nx] == a[y][x])
            dfs(ny, nx);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < n; j++) {
            a[i][j] = s[j];
        }
    }

    // 일반사람의 경우
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << " ";

    memset(visited, 0, sizeof(visited));
    cnt = 0;

    // (간단하게 풀기 위해 G를 R로 변경)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'G')
                a[i][j] = 'R';
        }
    }

    // 적록 색약의 경우
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }
    cout << cnt << "\n";
}