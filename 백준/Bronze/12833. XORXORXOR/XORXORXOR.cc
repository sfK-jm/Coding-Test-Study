#include <bits/stdc++.h>
using namespace std;

int a, b, c, ret;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b >> c;
    if (c % 2) // c가 홀수일때
        ret = a ^ b;
    else // xor연산을 짝수번 실행하면 원본대로 나옴
        ret = a;
    cout << ret << "\n";
}