#include <bits/stdc++.h>
using namespace std;

vector<int> v(3);

int main() {
	
	cin >> v[0] >> v[1] >> v[2];
	sort(v.begin(), v.end());
	if (v[0] + v[1] > v[2]) cout << v[0] + v[1] + v[2];
	else cout << (v[0] + v[1]) * 2 - 1;

}
