#include <bits/stdc++.h>
using namespace std;

int n;
int a[30][30];
int visited[30][30];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = { 0, 1, 0, -1};
int cnt;
vector<int> ret;
queue<pair<int, int>> q;

void dfs(int y, int x){
    q.push({y, x});
    visited[y][x] = 1;
    cnt++;

    while(q.size()){
        tie(y,x) = q.front(); q.pop();
        for (int i = 0; i< 4; i++){
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= n || a[ny][nx] == 0) continue;
            if (visited[ny][nx]) continue;
            visited[ny][nx] = visited[ny][nx] + 1;
            q.push({ny, nx});
            cnt++;
        }

    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%1d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            if(!a[i][j] || visited[i][j]) continue; 
            cnt = 0;
            dfs(i, j);
            ret.push_back(cnt);
        }
    }

    sort(ret.begin(), ret.end());

    cout << ret.size() << endl;
    for(int i : ret) cout << i << endl;
}