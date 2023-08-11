#include <bits/stdc++.h>
using namespace std;

int temp, a[35];

int main() {
    for (int i = 1; i <= 28; i++) {
        cin >> temp;
        a[temp] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (a[i] != 1)
            cout << i << '\n';
    }
}