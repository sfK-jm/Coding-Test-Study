#include <iostream>
using namespace std;

int n;

int main() {
	cin >> n;

	if (n % 10 != 0) {
		cout << -1 << "\n";
		return 0;
	}

	int a = n / 300;
	n %= 300;

	int b = n / 60;
	n %= 60;

	int c = n / 10;

	cout << a << " " << b << " " << c << "\n";
	return 0;
}