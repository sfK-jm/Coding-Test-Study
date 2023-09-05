#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, k, cnt;
int a[105]; // 전자제품 사용 순서
int visited[105];
const int INF = 987654321;
vector<int> v;

int main() {
    cin >> k >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (!visited[a[i]]) {
            // 콘센트가 다 찼을 경우
            if (v.size() == k) {
                int last_idx = 0, pos;
                for (int _a : v) {
                    int here_pick = INF;
                    for (int j = i + 1; j < n; j++) {
                        if (_a == a[j]) {
                            here_pick = j;
                            break;
                        }
                    }
                    if (last_idx < here_pick) {
                        last_idx = here_pick;
                        pos = _a;
                    }
                }
                visited[pos] = 0;
                cnt++;
                v.erase(find(v.begin(), v.end(), pos));
            }
            v.push_back(a[i]);
            visited[a[i]] = 1;
        }
    }
    cout << cnt << '\n';
}