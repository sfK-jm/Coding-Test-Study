#include <algorithm>
#include <iostream>
#include <map>
using namespace std;

int n, m, temp;
map<int, bool> ret;
int main() {
    cin >> n >> m;
    for (int i = 0; i < n + m; i++) {
        cin >> temp;
        if (ret[temp])
            ret.erase(temp);
        else
            ret[temp] = true;
    }
    cout << ret.size();
}