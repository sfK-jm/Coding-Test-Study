#include <bits/stdc++.h>
using namespace std;

int t, n;
string input;
vector<string> v1, v2;

void init() {
    v1.clear();
    v2.clear();
}

int main() {
    cin >> t;

    for (int i = 0; i < t; i++) {
        init();

        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> input;
            v1.push_back(input);
        }

        for (int j = 0; j < n; j++) {
            cin >> input;
            v2.push_back(input);
        }

        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());

        if (equal(v1.begin(), v1.end(), v2.begin())) cout << "NOT CHEATER\n";
        else cout << "CHEATER\n";
    }

}