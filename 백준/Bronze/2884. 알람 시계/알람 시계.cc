#include <iostream>
using namespace std;

int h, m;

int main() {
	cin >> h >> m;

	if (m < 45) {
		m += 15;
		if (--h < 0) h = 23;
	}
	else m -= 45;

	cout << h << " " << m;
}