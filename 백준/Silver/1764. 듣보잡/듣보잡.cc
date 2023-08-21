#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int n, m, cnt = 0;
string s;
vector<string> v;
map<string, bool> list;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> s;
        list.insert({s, true});
    }

    for (int i = 0; i < m; i++) {
        cin >> s;
        if (list[s]) {
            v.push_back(s);
            cnt++;
        }
    }
    sort(v.begin(), v.end());
    cout << cnt << '\n';
    for (string str : v)
        cout << str << '\n';
}