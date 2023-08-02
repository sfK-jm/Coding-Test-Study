#include <bits/stdc++.h>
using namespace std;

string s;
bool flag = false;

int main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i < s.size() - 1 && s.substr(i, 2) == "pi" ||
            s.substr(i, 2) == "ka")
            i += 1;
        else if (i < s.size() - 2 && s.substr(i, 3) == "chu")
            i += 2;
        else
            flag = true;
    }
    if (flag)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
}