#include <iostream>
using namespace std;

int n, ret;

int main() {
	cin >> n;
	if (n % 4 == 0 && (n % 100 != 0 || n % 400 == 0)) cout << 1;
	else cout << 0;
}
