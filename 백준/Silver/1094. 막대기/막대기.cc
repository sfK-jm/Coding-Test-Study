#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int n, ret = 1;

int main() {
    cin >> n;
    while (n != 1) {
        if (n & 1)
            ret++;
        n /= 2;
    }
    cout << ret << endl;
    return 0;
}

/*
입력 : 23
답 : 4

입력 : 32
답 : 1

입력 : 64
답 : 1
*/

// 23을 이진수로 표현시 10111
// 즉 이 문제는 입력받은 수를 이진수로 표현할때 이진수의 1의 개수가 답이다