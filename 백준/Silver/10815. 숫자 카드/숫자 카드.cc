#include <bits/stdc++.h>
using namespace std;

int n, m, temp;
vector<int> na;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        na.push_back(temp);
    }
    sort(na.begin(), na.end());
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> temp;
        cout << binary_search(na.begin(), na.end(), temp) << ' ';
    }
}