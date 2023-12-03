// 1149 RGB거리

#include <algorithm>
#include <iostream>
using namespace std;

int n;
int map[1003][3];
int cost[3];

int main() {
    cin >> n;

    map[0][0] = 0;
    map[0][1] = 0;
    map[0][2] = 0;

    for (int i = 1; i <= n; i++) {
        cin >> cost[0] >> cost[1] >> cost[2];

        map[i][0] = min(map[i - 1][1], map[i - 1][2]) + cost[0];
        map[i][1] = min(map[i - 1][0], map[i - 1][2]) + cost[1];
        map[i][2] = min(map[i - 1][1], map[i - 1][0]) + cost[2];
    }

    cout << min(map[n][0], min(map[n][1], map[n][2]));
}