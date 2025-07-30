#include <bits/stdc++.h>
using namespace std;

int n, h, w;
char c [1004][1004];
char result[104];

int main() {
    cin >> n >> h >> w;
    memset(result, '?', sizeof(result));

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < n * w; j++) {
            cin >> c[i][j];
            int index = j / w;
            if (c[i][j] != '?') result[index] = c[i][j];
        }
    }

    for (int i = 0; i < n; i++) cout << result[i];

}