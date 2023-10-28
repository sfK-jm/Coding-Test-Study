#include <iostream>
using namespace std;

int n, a, b, num;

int GCD(int a, int b){
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        num = GCD(a,b);
        cout << a * b / num << "\n";
    }
}