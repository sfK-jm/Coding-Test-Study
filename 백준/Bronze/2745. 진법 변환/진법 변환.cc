#include <bits/stdc++.h>
using namespace std;

string s;
int n, ret = 0;

int main(){
    cin >> s >> n;
    for (int i = 0; i < s.size(); i++){
        if (s[i] >= '0' && s[i] <= '9') ret = ret * n + (s[i] - '0');		
        else ret = ret * n + (s[i] - 'A' + 10);
    }
    cout << ret;
}