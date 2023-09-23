#include<bits/stdc++.h>
using namespace std;

// 경우의 수
// 최대크기 -> 무식하게
// 피자크기 200만 이하 
// a 1000 b 1000 이하
// 경우의수 배열에 담기 (비효율)

// 횟수 -> 저장
// 원형자료구조일경우 선형구조로 바꿔서 풀기
// 구간 쿼리 -> 누적합

int a[1005], b[1005], ret, psum_a[2002], psum_b[2002], want, n, m;
map<int, int> aCnt, bCnt;

void make(int n, int psum[], map<int, int>& mp) {
	for (int interval = 1; interval <= n; interval++) {
		for (int start = interval; start <= n + interval - 1; start++) {
			int sum = psum[start] - psum[start - interval];
			mp[sum]++;

			if (interval == n) break;
		}
	}
}

int main() {
	cin >> want >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		psum_a[i] = psum_a[i - 1] + a[i];
	}

	for (int i = n + 1; i <= 2 * n; i++) psum_a[i] = psum_a[i - 1] + a[i - n];
	
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
		psum_b[i] = psum_b[i - 1] + b[i];
	}
	for (int i = m + 1; i <= 2 * m; i++) psum_b[i] = psum_b[i - 1] + b[i - m];

	make(n, psum_a, aCnt);
	make(m, psum_b, bCnt);

	ret = (aCnt[want] + bCnt[want]);
	for (int i = 1; i < want; i++) ret += (aCnt[i] * bCnt[want - i]);

	cout << ret << '\n';
}