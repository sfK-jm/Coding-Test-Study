// 11401 이항 계수 3
#include <iostream>
using namespace std;
typedef long long ll;

int n, k;
ll mod = 1000000007;
ll n1 = 1, n2 = 1;

// 분활정복을 이용한 거듭제곱함수
ll pow(ll n, ll e) {
    if (e == 0)
        return 1;
    ll tmp = pow(n, e / 2) % mod;
    tmp = tmp * tmp % mod;
    if (e % 2 == 0) {
        return tmp % mod;
    } else {
        return n * tmp % mod;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;

    // 이향계수
    // n! / (n - k)! k!

    // 모듈러의 성질
    //(A * B) mod C = (A mod C * B mod C) mod C

    // 페르마의 소정리
    // A^M-1 <합동> 1 (mod M) (M은 소수)
    // A * A^M-2 <합동> 1 (mod M)
    // A^M-2 <합동> A^-1 (mod M)

    // N! / (N - K)! K! 에서 A = N!, B = (N - K)! K!로 두면
    // A/B (mod M) 으로 볼 수 있다.
    // 즉 페리마의 소정리를 이용하면 A * B^M-2 (mod M)을 구하면 된다

    for (int i = n - k + 1; i <= n; i++) {
        n1 = n1 * i % mod;
    }
    //
    for (int i = 1; i <= k; i++) {
        n2 = n2 * i % mod;
    }

    cout << n1 * pow(n2, mod - 2) % mod;
}