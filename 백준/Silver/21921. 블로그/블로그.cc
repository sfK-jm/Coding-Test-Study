#include <bits/stdc++.h>
using namespace std;

// n: 블로그 운영 시간 x: 연속일 m: 많이 들어온 방문자의 수 cnt: 최대 방문자수의 개수
int n, x, m, cnt;
int a[250000]; 
int psum[250000]; // 구간합

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> x;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        psum[i] = psum[i - 1] + a[i]; // 구간 합 구하기
    } 

    for (int i = x; i <= n; i++){
        if (m < psum[i] - psum[i - x]) cnt = 1;
        else if (m == psum[i] - psum[i - x]) cnt++;
        m = max(m, psum[i] - psum[i -x]);
    }

    if (m == 0) cout << "SAD";
    else cout << m << endl << cnt << endl;
}