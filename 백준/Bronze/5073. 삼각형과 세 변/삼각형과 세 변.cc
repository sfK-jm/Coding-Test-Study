#include <bits/stdc++.h>
using namespace std;

int a, b, c;
int highNum, low1, low2;

int main() {
	while (true) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) return 0;
		
		if (a > b && a > c) highNum = a, low1 = b, low2 = c;
		else if (b > a && b > c) highNum = b, low1 =c, low1 =a;
		else highNum = c, low1 =a, low2= b;

		if (highNum >= low1 + low2) cout << "Invalid" << '\n';
		else if (a == b && b == c && c == a) cout << "Equilateral" << '\n';
		else if (a == b || b == c || c == a) cout << "Isosceles" << '\n';
		else if (a != b && b != c && c != a) cout << "Scalene" << '\n';
		
	}
}

