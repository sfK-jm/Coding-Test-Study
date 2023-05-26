#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int t;
string s;

bool check(string s){
    stack<char> stk;
    for (char c : s){
        if (c == '(') stk.push(c);
        else {
            if (!stk.empty()) stk.pop();
            else return false;
        }
    }
    return stk.empty();
}


int main(){
    cin >> t;
    for (int i =0; i < t; i++){
        cin >> s;
        if (check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}