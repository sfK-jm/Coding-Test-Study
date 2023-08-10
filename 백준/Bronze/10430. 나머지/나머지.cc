#include <bits/stdc++.h>
using namespace std;

int n1, n2, n3, ret;

int main() {
	cin >> n1 >> n2 >> n3;
	
	ret = (n1 + n2) % n3;
	cout << ret << '\n';
	
	ret = ((n1 % n3) + (n2 % n3)) % n3;
	cout << ret << '\n';

	ret = (n1 * n2) % n3;
	cout << ret << '\n';

	ret = ((n1 % n3) * (n2 % n3)) % n3;
	cout << ret << '\n';
}