#include <iostream>
using namespace std;

int MIN = 987654321; // 임의의 큰수
long long A, B, cnt;

void dfs(long long a, int cnt) {
    if (a > B)
        return;

    if (a == B) {
        MIN = min(MIN, cnt);
        return;
    }

    dfs(a * 2, cnt + 1);
    dfs(a * 10 + 1, cnt + 1);
}

int main() {
    cin >> A >> B;

    dfs(A, 1);

    if (MIN == 987654321)
        cout << -1;
    else
        cout << MIN << "\n";
}