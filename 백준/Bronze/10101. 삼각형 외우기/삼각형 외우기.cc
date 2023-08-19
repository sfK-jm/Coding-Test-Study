#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
	cin >> a >> b >> c;

	if (a == 60 && b == 60 && c == 60) cout << "Equilateral";
	else if (a + b + c == 180 && (a == b || b == c || c == a)) cout << "Isosceles";
	else if (a + b + c == 180 && (a != b || b != c || c != a)) cout << "Scalene";
	else if (a + b + c != 180) cout << "Error";
}

