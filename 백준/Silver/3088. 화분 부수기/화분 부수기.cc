#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, cnt;
bool isChecked[1000004] = {false,};

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        if (isChecked[a] || isChecked[b] || isChecked[c]) {
            isChecked[a] = true;
            isChecked[b] = true;
            isChecked[c] = true;
        } else {
            cnt ++;
            isChecked[a] = true;
            isChecked[b] = true;
            isChecked[c] = true;
        }
    }

    cout << cnt << "\n";
}