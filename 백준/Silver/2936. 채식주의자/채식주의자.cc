#include <bits/stdc++.h>
using namespace std;

int x, y;

int main() {
    cin >> x >> y;

    if (x + y == 0) {
        cout << "125.00 125.00";
        return 0;
    }

    float base = (250.0 * 250.0) / 2;

    if (x > 0 && y > 0) {
        printf(x > y ? "0.00 %.2f" : "%.2f 0.00",
            250.0 - base / max(x, y));
        return 0;
    }

    if (x < 125 && y == 0) {
        base = 250.0 - base / (250 - x);
        printf("%.2f %.2f", base, 250.0-base);
        return 0;
    }

    if (x == 0 && y < 125) {
        base = 250.0 - base / (250 - y);
        printf("%.2f %.2f", 250.0 - base, base);
        return 0;
    }

    if (x == 0) {
        printf("%.2f 0.00", base / y);
        return 0;
    }

    if (y == 0) {
        printf("0.00 %.2f", base / x);
        return 0;
    }

}