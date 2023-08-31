#include<iostream>
#include <string>
using namespace std;

string s, t, ret;

int main() {
	cin >> s >> t;
	for (char a : s) {
		ret += a;
		if (ret.size() >= t.size() && ret.substr(ret.size() - t.size(), t.size()) == t)
			ret.erase(ret.end() - t.size(), ret.end());
	}
	if (!ret.size()) cout << "FRULA" << '\n';
	else cout << ret << '\n';
}