#include <bits/stdc++.h>
using namespace std;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

char a[7][7];
string s;
int visited[7][7];
// r: 맵의 세로 c: 맴의 가로 k: 짐까지 도착하는 거리 k
int r, c, k;

int go(int y, int x) {
    // 집에 도착했을 경우
    if (y == 0 && x == c - 1) {
        if (k == visited[y][x])
            return 1;
        return 0;
    }
    int ret = 0;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= r || nx < 0 || nx >= c || visited[ny][nx] ||
            a[ny][nx] == 'T')
            continue;
        visited[ny][nx] = visited[y][x] + 1;
        ret += go(ny, nx);
        visited[ny][nx] = 0;
    }
    return ret;
}

int main() {
    cin >> r >> c >> k;
    for (int i = 0; i < r; i++) {
        cin >> s;
        for (int j = 0; j < c; j++) {
            a[i][j] = s[j];
        }
    }

    // 현재 위치를 방문처리
    visited[r - 1][0] = 1;
    // 현재 위치부터 함수 시작
    cout << go(r - 1, 0) << "\n";
}