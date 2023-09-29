#include <string>
#include <vector>

using namespace std;

void pop_front(vector<char> &v){
    v.erase(v.begin());
}

string solution(string s) {
    string answer = "";
    vector<char> v;
    
    for (int i =0; i < s.size(); i++){
        v.push_back(s[i]);
    }
    
    while (v.size() != 1 && v.size() != 2){
        v.pop_back();
        pop_front(v);
    }
    
    for (char c : v){
        answer += c;
    }
    
    return answer;
}