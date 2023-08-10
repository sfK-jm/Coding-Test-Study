#include <iostream>
using namespace std;

int n, ret = 0;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) ret += i;
	cout << ret;
}