#include <iostream>
using namespace std;

int t, n;
int Q, D, N, P;

int main() {
	cin >> t;

	while(t--) {

		cin >> n;
		Q= 0, D = 0, N = 0, P = 0;

		while (n) {
			if (n >= 25) {
				Q++;
				n -= 25;
			}
			else if (n >= 10) {
				D++;
				n -= 10;
			}
			else if (n >= 5) {
				N ++;
				n -= 5;
			}
			else {
				P++;
				n -= 1;
			}
			
		}
		cout << Q << " " << D << " " << N << " " << P << "\n";
		
	}
}