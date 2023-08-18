#include <iostream>
using namespace std;

int n;
int x, y;
int highX = -987654321, lowX = 987654321;
int highY = -987654321, lowY = 987654321;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (n == 1) {
            cout << 0;
            return 0;
        }

        if (x > highX)
            highX = x;
        if (x < lowX)
            lowX = x;
        if (y > highY)
            highY = y;
        if (y < lowY)
            lowY = y;
    }
    cout << (highX - lowX) * (highY - lowY) << '\n';
}