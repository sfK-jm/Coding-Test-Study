#include <bits/stdc++.h>
using namespace std;

int n;
string s;

int main() {
	cin >> n >> s;
	cout << n * (s[2] - '0') << '\n';
	cout << n * (s[1] - '0') << '\n';
	cout << n * (s[0] - '0') << '\n';
	cout << n * stoi(s) << '\n';
}