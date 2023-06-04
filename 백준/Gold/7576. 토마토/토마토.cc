#include <bits/stdc++.h>
#define MAX_N 1001
int m, n;
using namespace std;
typedef pair<int, int> P;
int tomato[MAX_N][MAX_N];
queue<P> startPoint;
int dy[4] = {1, 0, -1, 0};
int dx[4] = {0, 1, 0, -1};

int bfsValue, nextValue;

void bfs(int y, int x) {
    for (int i = 0; i < 4; i++) {
        int nextY = y + dy[i];
        int nextX = x + dx[i];
        if (nextY >= n || nextY < 0 || nextX >= m || nextX < 0)
            continue;

        if (tomato[nextY][nextX] == 0) {
            tomato[nextY][nextX] = 1;
            nextValue++;
            startPoint.push({nextY, nextX});
        }
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1)
                startPoint.push({i, j});
        }
    }
    bfsValue = startPoint.size();
    nextValue = 0;
    int ret = 0;
    while (startPoint.size()) {
        P start = startPoint.front();
        bfs(start.first, start.second);
        bfsValue--;
        if (bfsValue == 0) {
            // cout << nextValue << endl;
            bfsValue = nextValue;
            nextValue = 0;
            ret++;
        }
        startPoint.pop();
    }
    ret -= 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tomato[i][j] == 0)
                ret = -1;
        }
    }
    cout << ret << '\n';
    return 0;
}