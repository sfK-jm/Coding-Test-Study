#include <bits/stdc++.h>
using namespace std;

int n, o, A, B, asum, bsum;
string s, previous;

string print(int a){
    string d = "00" + to_string(a / 60);
    string e = "00" + to_string(a % 60);
    return d.substr(d.size() -2 , 2) + ":" + e.substr(e.size() -2, 2);
}

int changeToInt(string s){
    return stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3,2));
}

void go(int &sum, string s){
    sum += (changeToInt(s) - changeToInt(previous));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n; // 골 케이스 수
    for (int i = 0; i < n; i++){
        cin >> o >> s; // o: 득점한 팀, s: 골 넎은 시간
        if (A > B)go(asum, s);
        else if (B > A) go(bsum, s);
        o == 1 ? A++ : B++; // 팀의 점수 추가
        previous = s;
    }

    if (A > B) go(asum, "48:00");
    else if (B > A) go(bsum, "48:00");
    cout << print(asum) << "\n";
    cout << print(bsum) << "\n";
}