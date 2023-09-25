#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int temp = x;
    
    for (int i = 1; i <= n; i++){
        answer.push_back(temp);
        temp += x;
    }
    return answer;
}