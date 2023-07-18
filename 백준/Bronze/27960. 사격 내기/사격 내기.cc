#include <bits/stdc++.h>
using namespace std;

int a, b, c;

// a와 b 둘 중 하나만 맞춘건 맞춤
// a,b 둘 다 못맞추거나 둘 다 맞춘건 못 맞춤

// 즉 c는 a와 b를 xor연산한 결과

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;
    c = a ^ b;
    cout << c << "\n";
}