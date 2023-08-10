#include <iostream>
using namespace std;

int a, b;
bool check = false;

int main() {
	while (true) {
		cin >> a >> b;
		if (a == 0 && b == 0) check = true;
		if (check) break;
		cout << a + b << "\n";
	}
}