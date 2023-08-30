#include<iostream>
#include<algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, ret;
int a, b;
vector<pair<int, int>> v;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b; // 강연료, 날짜
		v.push_back({ b,a }); // 날짜, 강연료
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		pq.push(v[i].second);
		if (pq.size() > v[i].first) pq.pop();
	}

	while (pq.size()) {
		ret += pq.top();
		pq.pop();
	}
	cout << ret << '\n';
}