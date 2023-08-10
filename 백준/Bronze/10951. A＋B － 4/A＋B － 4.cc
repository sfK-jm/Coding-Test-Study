#include <iostream>
using namespace std;

int a, b;
bool check = false;

int main() {
	while (!(cin >> a >> b).eof()) {
		cout << a + b << "\n";
	}
}