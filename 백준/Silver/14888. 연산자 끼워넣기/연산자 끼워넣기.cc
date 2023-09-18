#include <bits/stdc++.h>
using namespace std;

int n, a[15];
int pl, mi, mu, di;
int highRet = -1000000005;
int lowRet = 1000000005;

void go(int index, int cur, int plus, int minus, int mul, int div) {
	if (index == n - 1) {
		highRet = max(cur, highRet);
		lowRet = min(lowRet, cur);
		return;
	}

	if (plus) go(index + 1, cur + a[index + 1], plus - 1, minus, mul, div);
	if (minus) go(index + 1, cur - a[index + 1], plus, minus - 1, mul, div);
	if (mul) go(index + 1, cur * a[index + 1], plus, minus, mul - 1, div);
	if (div) go(index + 1, cur / a[index + 1], plus, minus, mul, div - 1);
	
	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	
	cin >> pl >> mi >> mu >> di;
	go(0, a[0], pl, mi, mu, di);
	
	cout << highRet << '\n' << lowRet << '\n';
}