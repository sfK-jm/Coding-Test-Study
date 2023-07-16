#include <bits/stdc++.h>
using namespace std;

int n, l, ret;
int a[105][105], b[105][105];
void solve(int a[105][105]) {
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        int j;
        for (j = 0; j < n - 1; j++) {
            if (a[i][j] == a[i][j + 1])
                cnt++;
            // 오르막길
            else if (a[i][j] + 1 == a[i][j + 1] && cnt >= l)
                cnt = 1;
            // 내리막길
            else if (a[i][j] - 1 == a[i][j + 1] && cnt >= 0)
                cnt = -l + 1;
            else
                break;
        }
        if (j == n - 1 && cnt >= 0)
            ret++;
    }
    return;
}

int main() {
    scanf("%d %d", &n, &l);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            b[j][i] = a[i][j];
        }
    }
    solve(a);
    solve(b);
    printf("%d\n", ret);
    return 0;
}