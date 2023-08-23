#include <iostream>
#include <set>
using namespace std;

string s, str;
set<string> ret;

int main() {
    cin >> s;

    str = "";
    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            str += s[j];
            ret.insert(str);
        }
        str = "";
    }

    cout << ret.size();
}