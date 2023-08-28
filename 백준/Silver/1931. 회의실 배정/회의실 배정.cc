#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int from, to, n;
int ret = 1;
vector<pair<int, int>> v;

int main() {	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> from >> to;
		v.push_back({ to, from });
	}
	sort(v.begin(), v.end());
	from = v[0].second;
	to = v[0].first;

	for (int i = 1; i < n; i++) {
		if (v[i].second < to) continue; // 겹치는 지점
		from = v[i].second;
		to = v[i].first;
		ret++;
	}
	cout << ret << '\n';
}