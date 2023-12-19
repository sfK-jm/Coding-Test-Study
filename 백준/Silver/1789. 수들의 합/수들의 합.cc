#include <iostream>
using namespace std;

long long s;
int cnt;

int main() {
    cin >> s;

    while (s > 0) {
        cnt++;
        s -= cnt;
    }

    if (s < 0) {
        cnt--;
    }

    cout << cnt << "\n";
}