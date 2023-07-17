#include <bits/stdc++.h>
using namespace std;

int m;
string order;
int num, ret = 0;

void go(string s) {
    if (s == "add") {
        cin >> num;
        ret |= (1 << num);
    } else if (s == "remove") {
        cin >> num;
        ret &= ~(1 << num);
    } else if (s == "check") {
        cin >> num;
        if (ret & (1 << num))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    } else if (s == "toggle") {
        cin >> num;
        ret ^= (1 << num);
    } else if (s == "all") {
        ret = (1 << 21) - 1;
    } else if (s == "empty") {
        ret = 0;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> order;
        go(order);
    }
}