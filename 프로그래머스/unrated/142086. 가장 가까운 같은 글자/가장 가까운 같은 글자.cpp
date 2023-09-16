#include <string>
#include <vector>
using namespace std;

bool flag;

vector<int> solution(string s) {
    vector<int> answer;
    
    int len = s.length();
    
    for (int i = 0; i < len; i++){
        flag = true; 
        for (int j = i - 1; j >= 0; j--){
            if(s[i] == s[j]){
                answer.push_back(i - j);
                flag = false;
                break;
            }
        }
        if(flag) answer.push_back(-1);   
    }
    return answer;
}