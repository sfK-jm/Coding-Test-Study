#include <bits/stdc++.h>
using namespace std;

int n, m, a, b, ret = 0;
vector<int> v[1001];
int visited[1001];

void dfs(int vertex) {
    if (visited[vertex])
        return;
    visited[vertex] = 1;

    for (int i = 0; i < v[vertex].size(); i++) {
        int idx = v[vertex][i];
        dfs(idx);
    }
    return;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {

        if (visited[i] == 0) {
            ret++;
            dfs(i);
        }
    }
    cout << ret << "\n";
}