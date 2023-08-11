#include <iostream>
using namespace std;

int k, q, l, b, n, p;

int main() {
    cin >> k >> q >> l >> b >> n >> p;
    cout << 1 - k << " " << 1 - q << " " << 2 - l << " " << 2 - b << " "
         << 2 - n << " " << 8 - p;
}