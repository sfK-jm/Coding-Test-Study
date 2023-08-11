#include <iostream>
using namespace std;

string s;

int main() {
    while (true) {
        getline(cin, s);
        if (s == "")
            break;
        cout << s << '\n';
    }
}