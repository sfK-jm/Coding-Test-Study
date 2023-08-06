#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string num = to_string(n);
    sort(num.rbegin(), num.rend());
    
    for(int i = 0; i < num.length(); i++) 
        answer = answer * 10 + (num[i] - '0');
    
    return answer;
}