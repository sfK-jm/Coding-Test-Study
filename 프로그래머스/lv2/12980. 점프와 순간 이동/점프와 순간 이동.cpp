#include <iostream>
using namespace std;

int solution(int n){
    int ans = 0;
    
    while (n){
        // 짝수일 경우
        if (n % 2 == 0) n /= 2;
        else {
            n -= 1;
            ans++;
        }
    }

    return ans;
}