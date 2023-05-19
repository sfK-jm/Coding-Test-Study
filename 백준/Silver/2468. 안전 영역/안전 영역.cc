#include <bits/stdc++.h>
using namespace std;

int dy[4] = {-1,0, 1,0};
int dx[4] = {0,1,0,-1}; 
int n, ny, nx, ret = 1;
int a[101][101];
int visited[101][101];

void dfs(int y, int x, int d){
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++){
        ny = y + dy[i];
        nx = x + dx[i];
        if (ny < 0 || nx < 0 || ny >= n || nx >= n ) continue;
        if (!visited[ny][nx] &&  a[ny][nx] > d) dfs(ny, nx , d); 
    }
    return;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
    } 
   }
   for (int d = 1; d < 101; d++){
        fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (a[i][j] > d && !visited[i][j]){
                    dfs(i, j, d);
                    cnt++;
                }
            }
        }
        ret = max(ret, cnt); 
   }
    cout << ret << '\n';
    return 0;
}