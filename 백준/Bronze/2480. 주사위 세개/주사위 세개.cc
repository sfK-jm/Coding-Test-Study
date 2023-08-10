#include <iostream>
using namespace std;

int n1, n2, n3, ret = 0;

int main() {
	cin >> n1 >> n2 >> n3;
	if (n1 == n2 && n2 == n3 && n3 == n1) ret = 10000 + n1 * 1000;
	else if (n1 == n2) ret = 1000 + n1 * 100;
	else if (n2 == n3) ret = 1000 + n2 * 100;
	else if (n3 == n1) ret = 1000 + n3 * 100;
	else {
		if (n1 > n2 && n1 > n3) ret = n1 * 100;
		else if (n2 > n1 && n2 > n3) ret = n2 * 100;
		else if (n3 > n1 && n3 > n2) ret = n3 * 100;
	}
	cout << ret;
}