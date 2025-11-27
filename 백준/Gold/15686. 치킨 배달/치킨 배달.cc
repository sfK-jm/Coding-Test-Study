#include <bits/stdc++.h>
using namespace std;

int n, m;
int result = INT_MAX;

struct Point {
    int r, c;
};

vector<Point> houses;
vector<Point> chickens;

// distTable[집인덱스][치킨집인덱스] = 거리
vector<vector<int>> distTable;
vector<bool> visited;

void dfs(int index, int count) {
    if (count == m) {
        int currentCityDist = 0;

        for (int hIdx = 0; hIdx < houses.size(); ++hIdx) {
            int minHouseDist = INT_MAX;

            // 선택된 치킨집들(visited가 true인 곳) 중에서 가장 가까운 거리 찾기
            for (int cIdx = 0; cIdx < chickens.size(); ++cIdx) {
                if (visited[cIdx]) {
                    int d = distTable[hIdx][cIdx];
                    if (d < minHouseDist) {
                        minHouseDist = d;
                    }
                }
            }
            currentCityDist += minHouseDist;

            if (currentCityDist >= result) return;
        }

        if (currentCityDist < result) {
            result = currentCityDist;
        }
        return;
    }
    
    for (int i = index; i < chickens.size(); ++i) {
        visited[i] = true;
        dfs(i + 1, count + 1);
        visited[i] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> n >> m)) return 0;

    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {
            int value;
            cin >> value;
            if (value == 1) {
                houses.push_back({r, c});
            } else if (value == 2) {
                chickens.push_back({r, c});
            }
        }
    }

    distTable.resize(houses.size());

    for (int hIdx = 0; hIdx < houses.size(); ++hIdx) {
        for (int cIdx = 0; cIdx < chickens.size(); ++cIdx) {
            int dist = abs(houses[hIdx].r - chickens[cIdx].r) +
                       abs(houses[hIdx].c - chickens[cIdx].c);
            distTable[hIdx].push_back(dist);
        }
    }

    visited.resize(chickens.size(), false);

    dfs(0, 0);
    cout << result << "\n";
    return 0;
}