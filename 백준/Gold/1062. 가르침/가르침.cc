#include <bits/stdc++.h>
using namespace std;

int n, m, k;
int words[55];
string s;


int count(int mask) {
    int cnt = 0;
    for (int w : words) {
        if (w && (w & mask) == w)
            cnt++;
    }
    return cnt;
}

/// @brief 비트마스킹을 이용한 완전탐색
/// @param idx
/// @param k k개의 글자만 배울 수 있음
/// @param mask 배운 글자의 수
/// @return k개의 글자를 가르칠때 읽릉 수 있는 단어의 최댓값
int go(int idx, int k, int mask) {
    if (k < 0)
        return 0;
    // 모든 경우의 수를 탐색을 했을때
    if (idx == 26)
        return count(mask);
    int ret = go(idx + 1, k - 1, mask | (1 << idx));
    if (idx != 'a' - 'a' && idx != 'n' - 'a' && idx != 't' - 'a' &&
        idx != 'i' - 'a' && idx != 'c' - 'a') {
        // 꼭 필요한 글자가 아닌 경우 해당 글자를 패스하는 로직
        ret = max(ret, go(idx + 1, k, mask));
    }
    return ret;
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (char c : s) {
            // 비트마스킹으로 words배열에 저장
            words[i] |= (1 << (c - 'a'));
        }
    }

    cout << go(0, m, 0) << "\n";
    return 0;
}
