#include <bits/stdc++.h>
using namespace std;
#define max_n 104

// 정점의 개수
int n;
int visited[max_n];
// 인접 리스트
vector<int> v[max_n];

void dfs(int x) {
    for (int i = 0; i < v[x].size(); i++) {
        if (!visited[v[x][i]]) {
            visited[v[x][i]] = 1;
            dfs(v[x][i]);
        }
    }
    return;
}

int main() {
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (temp)
                v[i].push_back(j);
        }
    }

    for (int i = 0; i < n; i++) {
        memset(visited, 0, sizeof(visited));
        dfs(i);
        for (int j = 0; j < n; j++) {
            cout << visited[j] << " ";
        }
        cout << "\n";
    }
}