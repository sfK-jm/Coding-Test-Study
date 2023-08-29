#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int n, ret, x;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++)  cin >> v[i];
	
	cin >> x;
	sort(v.begin(), v.end());

	int l = 0;
	int r = n - 1;

	while (l < r) {
		if (v[l] + v[r] == x) r--, ret++;
		else if (v[l] + v[r] > x) r--;
		else if (v[l] + v[r] < x) l++;
	}
	cout << ret << "\n";
}