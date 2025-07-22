#include <bits/stdc++.h>
using namespace std;

int a[9][9], t;
bool isVisited[10];

void input() {
    for (int i = 0; i < 9 ; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
        }
    }
}

bool check() {

    // 각 세로줄마다 가로줄에 중복이 있나 확인
    for (int col = 0; col < 9; col++) {
        memset(isVisited, false, sizeof(isVisited));
        for (int row = 0; row < 9; row ++) {
            int n = a[col][row];
            if (isVisited[n]) return false;
            isVisited[n] = true;
        }
    }

    // 각 가로줄마다 세로줄에 중복이 있나 확인
    for (int row = 0; row < 9; row++) {
        memset(isVisited, false, sizeof(isVisited));
        for (int col = 0; col < 9; col++) {
            int n = a[col][row];
            if (isVisited[n]) return false;
            isVisited[n] = true;
        }
    }

    // 내부 정사각형 중복 확인
    for (int i = 0; i < 9; i+=3) {
        for (int j = 0; j < 9; j+=3) {
            memset(isVisited, false, sizeof(isVisited));
            for (int c = 0; c < 3; c++) {
                for (int r = 0; r < 3; r++) {
                    int n = a[i + c][j + r];
                    if (isVisited[n]) return false;
                    isVisited[n] = true;
                }
            }
        }
    }

    return true;
}

int main() {
    cin >> t;

    for (int i = 1; i <= t; i++) {
        input();
        cout << "Case " << i << ": " << (check() ? "CORRECT" : "INCORRECT") << "\n";
    }
}
