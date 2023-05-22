#include <bits/stdc++.h>
using namespace std;

int n, m, j, l, r, temp, ret;

int main(){
    cin >> n >> m; // n 사과의 범위, m은 바구니의 범위
    cin >> j; // 떨어지는 사과의 개수
    l = 1; // 바구니의 좌측 끝
    for (int i =0; i < j; i++){
        r = l + m - 1; // 바구니의 우측 끝
        cin >> temp;
        if (temp >= l && temp <= r) continue;
        else {
            if (temp < l) {
                ret += (l - temp);
                l = temp;
            } else {
                ret += (temp - r);
                l += (temp - r);
            } 
        }
    }
    cout << ret << endl;
}