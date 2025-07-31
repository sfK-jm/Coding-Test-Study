#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<string> v;

bool check(string a, string b) {
    if (a.length() != b.length()) return false;

     for (int i = 0; i < b.size(); i++) {
         string checkStr = b.substr(i, b.length() - i) + b.substr(0, i);
         if(a == checkStr) return true;
     }

    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (check(v[i], v[j]))  v[j] = v[i];
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size() << "\n";
}