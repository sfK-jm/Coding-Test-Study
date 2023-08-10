#include <iostream>
using namespace std;

int n;

int main() {
	cin >> n;
	if (n >= 90) cout << 'A';
	else if (n >= 80) cout << 'B';
	else if (n >= 70) cout << 'C';
	else if (n >= 60) cout << 'D';
	else cout << 'F';
}