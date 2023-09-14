#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

// idx: 널빤지의 끝 인덱스
int n, m, idx, ret, b;

int main() {
	fastIO();
	
	cin >> n >> m;
	vector<pair<int, int>> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i].first >> a[i].second;

	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		if (a[i].second <= idx) continue; // 널판지로 이미 막은 부분일 경우
		
		if (idx < a[i].first) { // 널빤지를 새로 추가해야 하는 경우
			b = (a[i].second - a[i].first) / m + ((a[i].second - a[i].first) % m ? 1 : 0);
			idx = a[i].first + (b * m);
		}
		else { // 널빤지와 웅덩이의 교집합이 생기는 부분이 있을때
			b = (a[i].second - idx) / m + ((a[i].second - idx) % m ? 1 : 0);
			idx = idx + (b * m);
		}
		ret += b;
	}
	cout << ret << '\n';

}