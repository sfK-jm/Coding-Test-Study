#include <iostream>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num == 0) {
            if (pq.empty())
                cout << 0 << "\n";
            else {
                // 가장 낮은 수 출력
                cout << pq.top() << "\n";
                pq.pop();
            }
        } else
            pq.push(num);
    }
    return 0;
}