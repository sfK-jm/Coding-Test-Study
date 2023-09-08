#include <iostream>
#include <cstring>
using namespace std;

int n, ret;

struct Board {
	int a[25][25];

	void _rotate90() {
		int temp[25][25];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				temp[i][j] = a[n - j - 1][i];
			}
		}
		memcpy(a, temp, sizeof(a));
	}

	void _move() {
		int temp[25][25];
		for (int i = 0; i < n; i++) {
			int c = -1, d = 0;
			for (int j = 0; j < n; j++) {
				if (a[i][j] == 0) continue;
				if (d && a[i][j] == temp[i][c]) temp[i][c] *= 2, d = 0;
				else temp[i][++c] = a[i][j], d = 1;
			}
			for (c++; c < n; c++) temp[i][c] = 0;
		}
		memcpy(a, temp, sizeof(a));
	}

	void get_max() {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				ret = max(ret, a[i][j]);
			}
		}
	}
};

void go(Board c, int here) {
	if (here == 5) {
		c.get_max();
		return;
	}
	for (int i = 0; i < 4; i++) {
		Board d = c;
		d._move();
		go(d, here + 1);
		c._rotate90();
	}
	return;
}


int main() {
	cin >> n;
	Board c;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c.a[i][j];
		}
	}
	go(c, 0);
	cout << ret << '\n';
}
