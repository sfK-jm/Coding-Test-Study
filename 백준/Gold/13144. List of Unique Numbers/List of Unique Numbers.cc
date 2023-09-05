#include <iostream>
using namespace std;

int n;
long long s, e;
long long cnt[100005]; // 중복되는 요소를 확인라기 위한 배열
long long a[100005], ret;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (e < n) {
        if (!cnt[a[e]]) {
            cnt[a[e]]++;
            e++;
        } else {
            ret += (e - s);
            cnt[a[s]]--;
            s++;
        }
    }

    ret += (long long)(e - s) * (e - s + 1) / 2;
    cout << ret << '\n';
    return 0;
}