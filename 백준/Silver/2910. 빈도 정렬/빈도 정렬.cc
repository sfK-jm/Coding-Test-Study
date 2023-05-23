#include <bits/stdc++.h>
using namespace std;

int n, c, a[1005];
vector<pair<int, int>> v;
map<int, int> mp, mp_first; // mp에서는 카운팅 작업{숫자, 빈도} mp_first에서는 {숫자, 처음 나온 인덱스}

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first){
        return mp_first[a.second] < mp_first[b.second]; 
    }
    return a.first > b.first;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n >> c;
    for (int i = 0; i < n; i++){
        cin >> a[i]; mp[a[i]]++;
        if (mp_first[a[i]] == 0) mp_first[a[i]] = i + 1;
    }
    for(auto it: mp){
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end(), cmp); // v{빈도, 숫자}

    for(auto i : v){
        for (int j = 0; j < i.first; j++){
            cout << i.second << " ";
        }
    }
}