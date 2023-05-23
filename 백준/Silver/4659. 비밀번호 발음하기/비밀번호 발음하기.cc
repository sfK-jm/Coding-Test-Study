#include<bits/stdc++.h>
using namespace std;

string s;
int vcnt; // 연속의 모음 수
int ccnt; // 연속의 자음 수
bool is_include_v;
bool flag;
int prevIdx;

int isVowel(int idx){
    return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main(){
    while(1){
        cin >> s;
        vcnt = 0;
        ccnt = 0;
        is_include_v = false; 
        flag = false;
        prevIdx = -1;
        if (s == "end") break;
        for (int i =0; i < s.size(); i++){
            int idx = s[i];
            if(isVowel(idx)) ccnt = 0, vcnt++, is_include_v = true;
            else vcnt = 0, ccnt++;
            if (vcnt == 3 || ccnt == 3) flag = true;
            if (i >= 1 && (prevIdx == idx) && (idx != 'e' && idx != 'o')){
                flag = true;
            }
            prevIdx = idx;
        }
        if (!is_include_v) flag = true;
        if (flag) cout << "<"<< s << ">" <<  " is not acceptable." << endl;
        else cout << "<"<< s << ">" <<  " is acceptable." << endl;
    }

}