#include<bits/stdc++.h>
using namespace std;

int N, K; // N 개수 , K 연속 
int temp, psum[100001], ret = -10000001;

int main(){
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        cin >> temp; psum[i] = psum[i-1] + temp; 
    }
    for (int i = K; i <= N; i++){
        ret = max(ret, psum[i] - psum[i - K]);
    }
    cout << ret << endl;
    return 0;
}