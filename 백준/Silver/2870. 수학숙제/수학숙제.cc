#include <bits/stdc++.h>
using namespace std;

int m;
string input, ret;
vector<string> v;

void removeZero() {
    while (true) {
        if (ret.size() && ret.front() == '0') ret.erase(ret.begin());
        else break;
    }
    if (ret.size() == 0) ret = "0";
    v.push_back(ret);
    ret = "";
}

bool cmp(string a, string b) {
    if (a.size() == b.size()) return a < b;
    return a.size() < b.size();
}

int main() {
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> input;
        ret = "";
        for (int j = 0; j < input.size(); j++) {
            if (input[j] < 65) ret += input[j];
            else if (ret.size()) removeZero();
        }
        if (ret.size()) removeZero();
        sort(v.begin(), v.end(), cmp);

    }
    for (string s : v) cout << s << "\n";
}