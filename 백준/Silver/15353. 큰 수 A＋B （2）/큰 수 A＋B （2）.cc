#include <bits/stdc++.h>
using namespace std;

string a, b;


string solve(string s1, string s2) {
	string ret;
	int sum = 0; // 올림
	while (s1.size() || s2.size() || sum) {
		if (s1.size()) {
			sum += s1.back() - '0'; // 아스키로 구성괸 a를 10진수 형태로 변환 시키기 위해 
			s1.pop_back();
		}
		if (s2.size()) {
			sum += s2.back() - '0';
			s2.pop_back();
		}
		ret += (sum % 10) + '0'; // 10진수인 sum의 몫을 아스키 형태로 변환 후 ret에 저장 
		sum /= 10; // 자리 올림수를 sum에 저장
	}
	reverse(ret.begin(), ret.end());
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> a >> b;
	cout << solve(a, b) << '\n';
}