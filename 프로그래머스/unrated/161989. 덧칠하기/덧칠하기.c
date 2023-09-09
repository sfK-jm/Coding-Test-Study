#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// section_len은 배열 section의 길이입니다.
int solution(int n, int m, int section[], size_t section_len) {
    int answer = 0;
    int prev = section[0];
    int i = 0;
    
    while(i < section_len && prev <= n){
        if (prev <= section[i]){
            prev = section[i] + m;
            answer++;
        }
        else i += 1;
    } 
        
        
    return answer;
}