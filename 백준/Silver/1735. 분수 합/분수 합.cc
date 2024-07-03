#include <iostream>
using namespace std;

int main() {

    int a, b, c, d;
    int n, m, x, y, r;

    cin >> a >> b >> c >> d;

    n = x = (a * d) + (b * c); // 분자
    m = y = b * d;             // 분모

    // 유클리드 호제법이용
    // n(분자), m(분모)의 최대공약수 구하기
    while (y != 0) {
        // x(분자) y(분모)
        r = x % y;
        x = y;
        y = r;
    }

    // 분수를 최대공약수 x로 약분하여 출력
    cout << n / x << " " << m / x << endl;

    return 0;
}