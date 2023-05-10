#include <bits/stdc++.h>
using namespace std;

int N;
string pattern, s, front, rear;

int main(){
    cin >> N; // 케이스 수 입력
    cin >> pattern; // 패턴 입력
    int position = pattern.find('*');
    front = pattern.substr(0, position);
    rear = pattern.substr(position + 1);
    for (int i = 0; i < N; i++){
        cin >> s;
        if (front.size() + rear.size() > s.size()) cout << "NE"<< endl;
        else{
            if (front == s.substr(0, front.size()) && rear == s.substr(s.size() - rear.size())) cout << "DA"<< endl;
            else cout << "NE"<< endl;
        }
    }
}