#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    
    int size_s = s.length();
    if (size_s != 4 && size_s != 6) return false;
    
    for (int i = 0; i < s.length(); i++){
        if(!(s[i] >= '0' && s[i] <= '9')) return false;
    }
    
    return answer;
}