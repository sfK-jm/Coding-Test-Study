#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int tSize = t.size();
    int pSize = p.size();
    
    for (int i = 0; i < tSize - pSize + 1; i++){
        string s = t.substr(i, pSize);
        
        if (s <= p) answer++;
    }
    
    
    return answer;
}