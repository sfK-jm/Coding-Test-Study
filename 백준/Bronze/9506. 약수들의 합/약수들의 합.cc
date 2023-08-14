#include <bits/stdc++.h>
using namespace std;

int n, sum;
vector<int> v;

int main() {
	while (1) {
		cin >> n;
		v.clear();

		if (n == -1) break;

		for (int i = 1; i < n; i++) {
			if (n % i == 0) v.push_back(i);
		}

		sum = 0;
		for (int i = 0; i < v.size(); i++) sum += v[i];


		if (sum == n) {
			cout << n << " = ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i];
				if (i != v.size() - 1) cout << " + ";
				else cout << " " << '\n';
			}
		}
		else cout << n << " is NOT perfect." << '\n';
	}
}