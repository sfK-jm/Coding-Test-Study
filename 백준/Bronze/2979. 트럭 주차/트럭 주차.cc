#include <bits/stdc++.h>
using namespace std;

int A, B , C, a, b, cnt[104], ret ;
int main(){
    // 요금 입력
   cin >> A >> B >> C;

   for (int i = 0; i < 3; i++){
    // 트럭의 주차 시간 입력 받기
    cin >> a >> b;
    // 트럭에 주차시간배열에 1 추가
    for (int j = a; j < b; j++) cnt[j]++;    
   }  

   for (int j = 0; j < 100; j++){
        if (cnt[j]){
            if (cnt[j] == 1) ret += A; // j분에 주차되어던 버스가 1대일때
            else if (cnt[j] == 2) ret += B * 2; // j분에 주차되어던 버스가 2대일때
            else if (cnt[j] == 3) ret += C * 3; // j분에 주차되어던 버스가 3대일때 
        }
   }
  cout << ret << endl; 
}