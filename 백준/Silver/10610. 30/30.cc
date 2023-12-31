#include <algorithm>
#include <iostream>
using namespace std;

// 30의 배수
//  -> 맨 뒤는 0으로 끝나야함
//  -> 모든 자리수의 합을 3으로 나누면

string n;
long long sum;

int main() {
    cin >> n;
    // 내림차순 정렬
    sort(n.begin(), n.end(), greater<>());

    if (n[n.length() - 1] != '0')
        cout << -1 << "\n";

    else {
        // 각 자리수의 합을 더함
        for (char c : n)
            sum += c - '0';

        if (sum % 3 == 0)
            cout << n << "\n";
        else
            cout << -1 << "\n";
    }
}