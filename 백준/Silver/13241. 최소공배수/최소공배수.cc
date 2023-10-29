#include <iostream>
using namespace std;

int GCD(int a, int b){
	if (b == 0)
		return a;

	return GCD(b, a % b);
}

int main(){
	long long int A, B, gcd;
	cin >> A >> B;

	gcd = GCD(A, B);
	cout << A * B / gcd;
}