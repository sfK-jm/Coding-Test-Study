// 11830
#include <iostream>
#include <vector>
#define MOD 1000
using namespace std;

int n;

vector<vector<int>> mul(vector<vector<int>> &a, vector<vector<int>> &b) {
    vector<vector<int>> temp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                temp[i][j] += (a[i][k] * b[k][j]);
                temp[i][j] %= MOD;
            }
        }
    }
    return temp;
}

vector<vector<int>> pow(vector<vector<int>> &a, vector<vector<int>> &v,
                        long long b) {
    if (b == 1)
        return v;
    vector<vector<int>> temp(n, vector<int>(n, 0));
    if (b % 2 == 0) {
        temp = pow(a, v, b / 2);
        return mul(temp, temp);
    }
    temp = pow(a, v, b - 1);
    return mul(temp, a);
}

int main() {
    long long b;
    cin >> n >> b;

    vector<vector<int>> v(n, vector<int>(n, 0));
    vector<vector<int>> a(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            v[i][j] = a[i][j];
        }
    }
    v = pow(a, v, b);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << v[i][j] % MOD << " ";
        }
        cout << "\n";
    }
}