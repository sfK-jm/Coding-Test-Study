#include <iostream>
using namespace std;

int a, b;
bool isFactor, isMultiple;

int main() {
	while (1) {
		cin >> a >> b;
		isFactor = false;
		isMultiple = false;


		if (a == 0 && b == 0) break;

		for (int i = 1; i < 10000; i++) {
			if (a * i == b) isFactor = true;
		}

		for (int i = 1; i < 10000; i++) {
			if (b * i == a) isMultiple = true;
		}

		if (isFactor) cout << "factor" << '\n';
		else if (isMultiple) cout << "multiple" << '\n';
		else cout << "neither" << '\n';

	}
}