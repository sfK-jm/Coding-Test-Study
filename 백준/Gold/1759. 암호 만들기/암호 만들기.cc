#include <algorithm>
#include <iostream>
#include <vector>
typedef long long ll;
using namespace std;

int l, c;
vector<char> v;
vector<char> res;

bool isOk() {
    int cnt = 0; // 모음의 수
    for (int i = 0; i < l; i++) {
        if (res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' ||
            res[i] == 'u')
            cnt++;
    }

    // 모음의 수가 1 이상 자음의 수가 2이상인경우
    if (cnt >= 1 && l - cnt >= 2)
        return true;
    return false;
}

void dfs(int n) {
    if (res.size() == l) {
        if (isOk()) {
            for (int i = 0; i < l; i++)
                cout << res[i];
            cout << "\n";
        } else
            return;
    }
    for (int i = n; i < c; i++) {
        res.push_back(v[i]);
        dfs(i + 1);
        res.pop_back();
    }
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> l >> c;
    for (int i = 0; i < c; i++) {
        char temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    dfs(0);
}