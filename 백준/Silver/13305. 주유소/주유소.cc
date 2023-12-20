#include <iostream>
#include <vector>
using namespace std;

vector<long long> road;
vector<long long> oilPrice;

int n;
long long temp;
long long minCost, totalCost;

long long solve() {
    // 첫번째 도시의 기름값을 최소 비용으로 
    minCost = oilPrice[0];

    // 1 -> 2로 가기위해 1번째에서 주유
    totalCost += oilPrice[0] * road[0];

    // 2 -> 끝 | 도시별로 기름값 확인
    for (int i = 1; i < oilPrice.size() - 1; i++) {
        // i번째 도시의 기름값이 현재까지의 최소 비용보다 비쌀때
        if (oilPrice[i] > minCost)
            // 현재까지 최소 주유 비용 | i+1번쩨 도시까지 이동할 수 있도록 주유
            totalCost += minCost * road[i];

        // i번째 도시의 기름값이 현재까지의 주유 비용보다 비쌀때
        else {
            minCost = oilPrice[i];
            // 최소 기름값으로 i + 1번째 도시까지 이동할 수 있도록 주유
            totalCost += minCost * road[i];
        }
    }
    return totalCost;
}


int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    cin >> n;

    // 도로 길이
    for (int i = 0; i < n - 1; i++) {
        cin >> temp;
        road.push_back(temp);
    }

    // 도시별 주유비
    for (int i = 0; i < n; i++) {
        cin >> temp;
        oilPrice.push_back(temp);
    }

    cout << solve() << "\n";
}