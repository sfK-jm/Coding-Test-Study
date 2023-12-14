#include <iostream>
#include <queue>
using namespace std;

int n, k;
int map[100003];
int visited[100003];
queue<pair<int, int>> q;

void bfs(int a){
    q.push({a, 0});
    visited[a] = 1;

    while (!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        visited[x] = 1;

        if(map[x]){
            cout << y << "\n";
            break;
        }

        if (x + 1 >= 0 && x + 1 < 100001 && !visited[x + 1])
            q.push({x + 1, y + 1});

        if (x - 1 >= 0 && x - 1 < 100001 && !visited[x - 1])
            q.push({x-1, y + 1});

        if (x * 2 >= 0 && x * 2 < 100001 && !visited[x * 2])
            q.push({x * 2, y + 1});
    }
}

int main(){
    cin >> n >> k;
    map[k] = 1;
    bfs(n);
}