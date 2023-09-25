#include <string>
#include <vector>

using namespace std;

int Count(int x){
    int cnt = 0;
    for (int i = 0; i < 31; i++){
        if (x & 1 << i) cnt++;
    }
    return cnt;
}

int solution(int n) {
    int answer = 0;
    int temp = Count(n);
    
    for (int i = n + 1; i < 10000001; i++){
        if (temp == Count(i)){
            answer = i;
            break;
        }
    }
    return answer;
}