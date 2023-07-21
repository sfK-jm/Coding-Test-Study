#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";

    vector<int> v;
    string temp;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            temp += s[i];
        } else {
            v.push_back(stoi(temp));
            temp.clear();
        }
    }
    v.push_back(stoi(temp));
    sort(v.begin(), v.end());
    answer += to_string(v.front()) + " " + to_string(v.back());

    return answer;
}