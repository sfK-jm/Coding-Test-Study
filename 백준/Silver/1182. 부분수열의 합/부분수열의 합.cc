#include <iostream>
#include <vector>
using namespace std;

int n, s, cnt;
vector<int> v;

void solve(int idx, int sum) {

    // 모든 수를 다 더했을때 리턴
    if (idx == n)
        return;

    // 지금ㅈ까지의 합에서 현재의 수를 더함
    if (sum + v[idx] == s)
        // 목표숫자와 같을때
        cnt++;

    // 현재의 숫자 패스
    solve(idx + 1, sum);

    // 현재숫자 더하기
    solve(idx + 1, sum + v[idx]);
}

int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    solve(0, 0);
    cout << cnt << "\n";
}