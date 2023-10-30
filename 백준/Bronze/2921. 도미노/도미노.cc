#include <iostream>
using namespace std;

int n, sum = 0;

int main() {

	cin >> n;

	for (int i = 0; i < n+1; i++) {
		for (int j = 0; j < i+1; j++) {
			sum += i + j;
		}
	}
	cout << sum;

	return 0;
}