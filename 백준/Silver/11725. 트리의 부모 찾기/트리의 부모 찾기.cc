#include <iostream>
#include <vector>
#define MAX 100003
using namespace std;

int n;
int a[MAX];
bool visited[MAX];
vector<int> v[MAX];

void dfs(int num) {
    visited[num] = true;
    for (int i = 0; i < v[num].size(); i++) {
        int next = v[num][i];
        if (!visited[next]) {
            a[next] = num;
            dfs(next);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);

    for (int i = 2; i <= n; i++)
        cout << a[i] << "\n";
}