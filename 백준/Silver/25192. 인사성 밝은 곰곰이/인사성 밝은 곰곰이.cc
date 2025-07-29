#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0;
set<string> m;
string input;

int main() {

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;

        if (input == "ENTER") {
            cnt += m.size();
            m.clear();
            continue;
        }

        m.insert(input);
    }

    cnt += m.size();

    cout << cnt << "\n";
}