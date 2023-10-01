#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = -1;
    vector<int> v;
    
    v.push_back(s[0]);
    for (int i = 1; i < s.size(); i++){
        if (v.back() == s[i]){
            v.pop_back();
        }
        else {v.push_back(s[i]);}
    }
    
    answer = v.size() ? 0 : 1; 

    return answer;
}