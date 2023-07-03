#include <bits/stdc++.h>
using namespace std;

int n, a[1030];
vector<int> ret[15];

/** start, end, level */
void go(int s, int e, int level) {
    if (s > e)
        return;
    if (s == e) {
        ret[level].push_back(a[s]);
        return;
    }
    // 소수는 버림처리
    int mid = (s + e) / 2;
    ret[level].push_back(a[mid]);
    go(s, mid - 1, level + 1);
    go(mid + 1, e, level + 1);
    return;
}

// 완전 이진 트리 InOrder 형태 -> 원래의 완전 이진 트리형식
int main() {
    cin >> n;
    int _end = (int)pow(2, n) - 1;
    for (int i = 0; i < _end; i++)
        cin >> a[i];
    go(0, _end, 1);

    for (int i = 1; i <= n; i++) {
        for (int j : ret[i]) {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}