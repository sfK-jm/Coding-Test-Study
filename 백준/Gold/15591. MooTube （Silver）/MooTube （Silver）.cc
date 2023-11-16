#include <bits/stdc++.h>
using namespace std;

struct Video {
    int v;
    int USADO;
};

int N, Q;
int p, q, r;
vector<Video> mooTube[5001];
bool visited[5001];

int bfs(int k, int v) {
    queue<int> q;
    q.push(v);
    visited[v] = true;
    int cnt = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 0; i < mooTube[v].size(); i++) {
            int nv = mooTube[v][i].v;
            int nU = mooTube[v][i].USADO;
            if (nU < k || visited[nv])
                continue;
            visited[nv] = true;
            cnt++;
            q.push(nv);
        }
    }
    return cnt;
}

int main() {
    cin >> N >> Q;
    for (int i = 0; i < N - 1; i++) {
        cin >> p >> q >> r;
        mooTube[p].push_back({q, r});
        mooTube[q].push_back({p, r});
    }
    int k, v;
    while (Q--) {
        for (int i = 1; i <= N; i++)
            visited[i] = false;
        cin >> k >> v;
        cout << bfs(k, v) << '\n';
    }
    return 0;
}