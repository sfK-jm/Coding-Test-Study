#include <iostream>
#include <queue>
#include <vector>
#define MAX 20003
#define INF 987654321
using namespace std;

/**
 * @brief 시작시 입력받는 변수
 * n: 정점의 개수
 * e: 간선의 개수
 * k: 시작 정점 번호
 */
int n, e, k;

// 길의 최소 가중치
int dist[MAX];

// v: v[출발지] {도착지, 가중치}
vector<pair<int, int>> v[MAX];

// 오름차순 우선순위 큐를 위한 compare 구조체
struct compare {
    bool operator()(pair<int, int> a, pair<int, int> b) {
        return a.first > b.first;
    }
};

void input() {
    cin >> n >> e;
    cin >> k;
    for (int i = 0; i < e; i++) {
        /**
         * @brief e만큼 반복되는 동안 입력되는 값
         * a, b, c
         * a에서 b로 가는 가중치 c인 간선
         */
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }
    // 특정지점까지의 길의 가중치를 INF로 설정
    for (int i = 1; i <= n; i++)
        dist[i] = INF;
}

/**
 * 다익스트라 알고리즘
 */
void dijkstra() {
    // 우선순위 큐(으름차순)
    priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

    // 초기 시작시점 설정
    pq.push(make_pair(0, k));
    dist[k] = 0;

    while (!pq.empty()) {
        /**
         * @brief
         *  cost: 가중치
         *  cur: 현재 위치
         */
        int cost = (pq.top().first);
        int cur = pq.top().second;
        pq.pop();

        // cur(현재위치)와 연결된 간선 수 만큼 반복
        for (int i = 0; i < v[cur].size(); i++) {
            /*i번째 간선의 도착지*/
            int next = v[cur][i].first;
            /*i번째 간선의 가중치 */
            int nextCost = v[cur][i].second;

            /* 현재까지 저장되었던 next위치까지의 가중치가 현재의 경로에서의 가중치보다 더 작을경우 */
            if (dist[next] > cost + nextCost) {
                dist[next] = cost + nextCost;
                pq.push(make_pair(dist[next], next));
            }
        }
    }
}

void print() {
    for (int i = 1; i <= n; i++) {
        if (dist[i] == INF)
            cout << "INF" << '\n';
        else
            cout << dist[i] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    dijkstra();
    print();
}