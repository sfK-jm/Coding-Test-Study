#include <iostream>
using namespace std;

bool Eratosthenes[4000005];
int n, p, low, high, ret, sum;
int a[2000005];

int main() {
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (Eratosthenes[i])
            continue;
        for (int j = 2 * i; j <= n; j += i)
            Eratosthenes[j] = 1;
    }

    for (int i = 2; i <= n; i++) {
        if (!Eratosthenes[i])
            a[p++] = i;
    }

    while (true) {
        if (sum >= n)
            sum -= a[low++];
        else if (high == p)
            break;
        else
            sum += a[high++];

        if (sum == n)
            ret++;
    }
    cout << ret << '\n';
}