#include <iostream>
#include <algorithm>

using namespace std;

int n, b;
string ret;

int main() {
	cin >> n >> b;

	while (n != 0) {
		int temp = n % b;
		if (temp > 9) {
			temp = temp - 10 + 'A';
			ret += temp;
		}
		else ret += ('0' + temp);
		n /= b;
	}
	reverse(ret.begin(), ret.end());
	cout << ret;
}