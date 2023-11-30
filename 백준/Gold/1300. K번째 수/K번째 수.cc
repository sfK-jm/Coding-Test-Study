#include <iostream>
#include <algorithm>
using namespace std;

int n, k;

int main(){
    cin >> n >> k;
    
    int low =1;
    int high = k;
    while (low < high){
        int mid = (low + high) / 2;
        int cnt = 0;
        
        for (int i = 1; i <= n; i++) cnt += min(n, mid / i);
        
        if (cnt < k) low = mid + 1;
        else high = mid;
    }
    
    cout << high << '\n';
}