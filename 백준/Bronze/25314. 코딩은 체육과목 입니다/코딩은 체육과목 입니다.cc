#include <iostream>
#include <string>
using namespace std;

int n, b;
string s;

int main(){
	cin >> n;
	b = n / 4;
	for (int i = 0; i < b; i++) {
		s.append("long ");
	}
	s.append("int");
	cout << s;
}