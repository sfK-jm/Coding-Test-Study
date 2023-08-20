#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, ret = 0;
vector<string> v;
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i< n ; i++){
		cin >> s;
		v.push_back(s);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++) {
		cin >> s;
		if (binary_search(v.begin(), v.end(), s)) ret++;
	}
	cout << ret;
}

