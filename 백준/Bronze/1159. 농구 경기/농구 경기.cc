#include <bits/stdc++.h>
using namespace std;
string s, ret;
int n, cnt[26];
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s;
        cnt[s[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++) if (cnt[i] >= 5) ret += (i + 'a');
    if (ret.size()) cout << ret << endl;
    else cout << "PREDAJA";
}