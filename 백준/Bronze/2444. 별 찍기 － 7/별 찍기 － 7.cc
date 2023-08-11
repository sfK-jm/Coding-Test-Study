#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int k = 0; k < 2 * i - 1; k++)
            cout << "*";
        cout << '\n';
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++)
            cout << " ";
        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
            cout << "*";
        cout << '\n';
    }
}