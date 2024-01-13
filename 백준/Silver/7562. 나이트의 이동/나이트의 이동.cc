#include <iostream>
#include <queue>

#define MAX 303
using namespace std;

int t, l;
int currentX, currentY, targetX, targetY;
int arr[MAX][MAX];
int visited[MAX][MAX];
int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
queue<pair<int, int>> q;

void init() {
    while (!q.empty())
        q.pop();
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            arr[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}

void bfs(int x, int y) {
    q.push({x, y});
    visited[x][y] = 1;
    while (!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        if (a == targetX && b == targetY) {
            cout << arr[a][b] << "\n";
            return;
        }

        for (int i = 0; i < 8; i++) {
            int na = a + dx[i];
            int nb = b + dy[i];
            if (0 <= na && na < l && 0 <= nb && nb < l && !visited[na][nb]) {
                q.push({na, nb});
                visited[na][nb] = 1;
                arr[na][nb] = arr[a][b] + 1;
            }
        }
    }
}

int main() {

    cin >> t;
    for (int i = 0; i < t; i++) {
        init();
        cin >> l;
        cin >> currentX >> currentY;
        cin >> targetX >> targetY;

        bfs(currentX, currentY);
    }
}