#include <iostream>
using namespace std;

int n;
long long a[103];

int main() {
    cin >> n;

    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= n; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }
    cout << a[n] << "\n";
}