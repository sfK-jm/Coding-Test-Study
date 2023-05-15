#include<bits/stdc++.h>
using namespace std;

int n, m, shield[15001], cnt; // n: 재료의 개수, m: 제작에 필요한 수
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++) cin >> shield[i];
    
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (shield[i] + shield[j] == m) cnt++;
        }
    }
    cout << cnt << "\n";
}