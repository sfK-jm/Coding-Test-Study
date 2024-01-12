#include <iostream>
using namespace std;

string s;
int res;

int main() {
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != s[i + 1])
            res++;
    }

    if (!res)
        cout << res << "\n";
    else
        cout << res / 2 << "\n";
}