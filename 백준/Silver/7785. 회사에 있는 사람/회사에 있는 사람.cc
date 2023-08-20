#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

map<string, bool, greater<string>> m;
string temp1, temp2;
int n;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp1 >> temp2;
		if (temp2 == "enter") {
			m.insert({ temp1, true });
		}
		else if (temp2 == "leave") {
			m.erase(temp1);
		}
	}
	
	for (auto a : m) {
		cout << a.first << "\n";
	}
}