#include <bits/stdc++.h>
using namespace std;

int n, ret = 1, startIndex = 1, endIndex = 1, sum = 1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    while(endIndex != n){
        if (sum == n){  // 답을 찾았을 때
            ret++;
            endIndex++;
            sum += endIndex;
        }

        else if(sum > n){   // 현재 합이 답보다 클 때
            sum = sum - startIndex;
            startIndex++;
        }

        else {  // 현재 합이 답보다 작을때
            endIndex++;
            sum = sum + endIndex;
        }
    }
    cout << ret << endl;
}