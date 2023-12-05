// 11053
/*
수열 A가 주어졌을 때, 가장 긴 증가하는 부분 수열을 구하는 프로그램을 작성하시오.

예를 들어, 수열 A = {10, 20, 10, 30, 20, 50} 인 경우에 가장 긴 증가하는 부분
수열은 A = {10, 20, 10, 30, 20, 50} 이고, 길이는 4이다.
*/

#include <algorithm>
#include <iostream>
using namespace std;

int n;
int arr[1003];
int dp[1003];
int ret = 0;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        ret = max(ret, dp[i]);
    }
    cout << ret << "\n";
}