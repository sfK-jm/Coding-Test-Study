#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, temp;
int cnt[10005] = {};
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		cnt[temp]++;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < cnt[i]; j++) {
			cout << i << '\n';
		}
	}
}

