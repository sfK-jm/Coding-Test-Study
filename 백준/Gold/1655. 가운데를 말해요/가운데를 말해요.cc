#include <iostream>
#include <queue>
using namespace std;

int n, temp;

// 우선순위 큐는 힙(Heap)이라는 자료구조를 가진다

// 최대 큐
priority_queue<int> max_queue;
// 최소 큐
priority_queue<int, vector<int>, greater<int>> min_queue;

// 최소힙과 최대힙으로 중앙값 구하기
// (최대 힙) 노드의 최상위가 제일 크다
// (최소 힙) 노드의 최상위가 제일 작다
// 1. 최대힙의 크기는 최소힙의 크기보다 더 크거나 같아야 한다
// 2. 최대힙의 최대 원소는 최소힙의 최소원소보다 작거나 같아야한다.

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        // 최대힙이 비어있거나 최대힙과 최소힙의 크기가 같으면 최대힙에넣는다.
        if (max_queue.empty() || max_queue.size() == min_queue.size()) {
            max_queue.push(temp);
        } else {
            // 최대힙의 크기가 더 크면 최소힙에 넣는다.
            min_queue.push(temp);
        }

        // 최대힙의 최대 원소가 최소힙의 최소원소보다 크면 두 원소를 바꾼다.
        if (!max_queue.empty() && !min_queue.empty() &&
            max_queue.top() > min_queue.top()) {
            int x = max_queue.top();
            int y = min_queue.top();

            max_queue.pop();
            min_queue.pop();

            max_queue.push(y);
            min_queue.push(x);
        }
        cout << max_queue.top() << '\n';
    }
}