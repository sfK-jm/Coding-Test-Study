#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	map<string, int> m;
	while (n--)
	{
		string str;
		cin >> str;

		if (m.find(str) == m.end())
			m.insert({ str, 1 });
		else
			m[str]++;
	}

	int max = 0;
	string res;
	for (auto& i : m)
		if (i.second > max)
			res = i.first, max = i.second;

	cout << res;
	return 0;
}