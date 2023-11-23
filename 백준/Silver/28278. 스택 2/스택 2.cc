#include <iostream>
#include <stack>
using namespace std;

int n, command, num;
stack<int> stk;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> command;

        if (command == 1) {
            cin >> num;
            stk.push(num);
        } else if (command == 2) {
            if (stk.empty())
                cout << -1 << '\n';
            else {
                cout << stk.top() << '\n';
                stk.pop();
            }
        } else if (command == 3) {
            cout << stk.size() << '\n';
        } else if (command == 4) {
            cout << (stk.empty() ? 1 : 0) << '\n';
        } else {
            cout << (stk.empty() ? -1 : stk.top()) << '\n';
        }
    }
}