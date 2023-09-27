#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num;
    int cnt = 0;
    
    if ( n == 1 ) return 0;

    while (cnt < 500){
        cnt ++;
        if ( n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
        
        if (n == 1) break;
    }
    
    if (cnt < 500) answer = cnt;
    else answer = -1;
    
    return answer;
}