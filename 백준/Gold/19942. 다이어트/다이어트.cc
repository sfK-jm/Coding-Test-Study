#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int n, mp, mf, ms, mv;
int b, c, d, e, ret = INF, sum;

struct A {
    int mp;   // 단백질
    int mf;   // 지방
    int ms;   // 탄수화물
    int mv;   // 비타민
    int cost; // 가격
} a[16];
map<int, vector<vector<int>>> ret_v;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n; // 식재료 개수
    cin >> mp >> mf >> ms >> mv;

    for (int i = 0; i < n; i++) {
        cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;
    }

    for (int i = 1; i < (1 << n); i++) {
        b = c = d = e = sum = 0;
        vector<int> v;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                v.push_back(j + 1);
                b += a[j].mp;
                c += a[j].mf;
                d += a[j].ms;
                e += a[j].mv;
                sum += a[j].cost;
            }
        }

        if (b >= mp && c >= mf && d >= ms && e >= mv) {
            if (ret >= sum) {
                ret = sum;
                ret_v[ret].push_back(v);
            }
        }
    }

    if (ret == INF) // 조건을 만족하는 답이 없을 경우
        cout << -1 << "\n";
    else {
        sort(ret_v[ret].begin(), ret_v[ret].end()); // 최저 가격 찾기
        cout << ret << "\n";                        // 최저 가격 출력
        for (int a : ret_v[ret][0]) {
            cout << a << " ";
        }
    }
}