#include <bits/stdc++.h>
using namespace std;

int n, a[45], ret = 987654321;
string s;

/* 문자열의 각 위치를 탐색하면서 가능한 모든 뒤집기 조합 확인 [here:현재위치]*/
void go(int here) {
    if (here == n + 1) {
        int sum = 0;
        for (int i = 1; i <= (1 << (n - 1)); i *= 2) {
            int cnt = 0; // 해당 비트가 켜져 있는 위치의 개수를 세는 변수
            for (int j = 1; j <= n; j++)
                // 현재 위치 j의 비트가 i와 일치하는 경우, 해당 위치의 비트가 켜져 있다는 의미
                if (a[j] & i)
                    cnt++;
            sum += min(cnt, n - cnt);
        }
        ret = min(ret, sum);
        return;
    }

    go(here + 1);       // 안뒤집기
    a[here] = ~a[here]; // 뒤집기
    go(here + 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        int value = 1;
        for (int j = 0; j <= s.size(); j++) {
            if (s[j] == 'T')
                a[i] |= value;
            value *= 2;
        }
    }
    go(1);
    cout << ret << "\n";
}