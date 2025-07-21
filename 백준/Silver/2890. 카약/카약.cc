#include <bits/stdc++.h>
using namespace std;

int r, c;
int ranking[10];
int cnt = 1;
bool flag;
string s;
vector<string> v;

int main() {

    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        cin >> s;
        v.push_back(s);
    }

    for (int i = c - 2; i >= 1; i--) {
        for (int j = 0; j < r; j++) {
            int kayakNum = v[j][i] - '0';
            if (!ranking[kayakNum] && kayakNum > 0 && kayakNum <= 9) {
                ranking[kayakNum] = cnt;
                flag = true;
            }
        }

        if (flag) cnt++;
        flag = false;
    }
    for (int i = 1; i <= 9; i++) cout << ranking[i] << "\n";
}
