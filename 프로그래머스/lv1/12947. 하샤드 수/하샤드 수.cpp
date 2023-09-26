#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int sum = 0;
    int temp = x;
    
    while(temp > 0){
        sum += temp % 10;
        temp = temp / 10;
    }
    
    answer = x % sum == 0 ? 1 : 0;
    
    return answer;
}