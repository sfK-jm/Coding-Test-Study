#include <iostream>
#include <string>
using namespace std;

int t, a, b;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
}