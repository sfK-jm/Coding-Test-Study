#include <iostream>
#include <stack>
using namespace std;

int totalPrice, n, a, b, ret;


int main(){
	cin >> totalPrice >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		ret += a * b;
	}
	if (totalPrice == ret) cout << "Yes";
	else cout << "No";
}