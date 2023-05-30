#include<bits/stdc++.h>
using namespace std;

int n, m; // n: 컴퓨터 수 m: 신뢰 관계의 수
vector<int> v[10001];
int visited[10001], dp[10001], a, b, mx;

int dfs(int here){
    visited[here] = 1;
    int ret = 1;
    for (int there : v[here]){
        if(visited[there]) continue;
        ret += dfs(there);
    }
    return ret;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    while (m--){
       cin >> a >> b;
       v[b].push_back(a);
    }
    
    for (int i = 1; i <= n; i++){
        memset(visited, 0, sizeof(visited));
        dp[i] = dfs(i);
        mx = max(dp[i], mx);
    }
    for (int i = 1; i <= n; i++) {
        if (mx == dp[i]) cout << i << " ";
    }
    return 0;
}