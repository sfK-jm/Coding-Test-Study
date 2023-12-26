#include <iostream>
#define MAX 15
using namespace std;

int n, cnt;
int a[MAX];

bool check(int num) {
    for (int i = 0; i < num; i++) {

        if (a[i] == a[num] || abs(a[num] - a[i]) == num - i)
            return false;
    }
    return true;
}

void nqueen(int num) {
    // 퀸의 개수가 n과 같을때
    if (num == n)
        cnt++;
    else {
        for (int i = 0; i < n; i++) {
            // 퀸 배치
            a[num] = i;

            // 놓아돌 될 경우 퀸 배치
            if (check(num))
                nqueen(num + 1);
        }
    }
}

// 퀸은 같은 행 또는 같은 열, 대각선상에 위치할 수 없음

int main() {
    cin >> n;
    nqueen(0);
    cout << cnt << "\n";
}