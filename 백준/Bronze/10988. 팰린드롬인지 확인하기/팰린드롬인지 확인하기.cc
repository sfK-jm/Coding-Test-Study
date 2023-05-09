#include <bits/stdc++.h>
using namespace std;

string s, temp;

int main(){
    cin >> s;
    temp = s;
    reverse(temp.begin(), temp.end());
    if (temp == s) cout << 1 << endl; 
    else cout << 0 << endl;
}