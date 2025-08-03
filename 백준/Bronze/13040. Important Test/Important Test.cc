#include <bits/stdc++.h>
using namespace std;

int n, t, t0, m;

int main() {
    cin >> n >> t >> t0;

    for (int i = 0; i < n; i++) {
        cin >> m;
        vector<int> v(m);
        for (int j = 0; j < m; j++)
            cin >> v[j];

        int timeSpent = 0;
        int taskCnt = 0;

        for (int j = 0; j < m; j++) {
            if (timeSpent + v[j] > t) break;
            timeSpent += v[j];
            taskCnt++;
        }

        for (int j = 0; j < m; j++) {
            int time = 0;
            int count = 0;

            for (int k = 0; k < m; k++) {
                if (k == j) {
                    if (time + t0 > t) break;
                    time += t0;
                } else {
                    if (time + v[k] > t) break;
                    time += v[k];
                }
                count++;
            }
            taskCnt = max(taskCnt, count);
        }

        cout << taskCnt << endl;
    }

    return 0;
}
