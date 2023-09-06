#include <bits/stdc++.h>
using namespace std;

int a[55][55], temp[55][55], n, m, t, ret;
vector<pair<int, int>> v1, v2;

int dy1[] = { 0, -1, 0, 1 };
int dx1[] = { 1, 0, -1, 0 };
int dy2[] = { 0, 1, 0, -1 };
int dx2[] = { 1, 0, -1, 0 };

vector<pair<int, int>> cleanairRoute(int sy, int sx, int dy[], int dx[]) {
	vector < pair<int, int>> v;
	int cnt = 0;
	int y = sy;
	int x = sx;
	while (true) {
		int ny = y + dy[cnt];
		int nx = x + dx[cnt];
		if (ny == sy && nx == sx) // 처음 위치로 돌아왔을때
			break;
		if (ny < 0 || ny >= n || nx < 0 || nx >= m) {
			cnt++;
			ny = y + dy[cnt];
			nx = x + dx[cnt];
		}
		if (ny == sy && nx == sx) 
			break;

		y = ny;
		x = nx;
		v.push_back({ ny, nx });
	}
	return v;
}

void dust(int dy[], int dx[]) {
	fill(&temp[0][0], &temp[0][0] + 55 * 55, 0);
	queue<pair<int, int >> q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != -1 && a[i][j]) q.push({ i, j });
		}
	}

	while (q.size()) {
		int y, x;
		tie(y, x) = q.front(); q.pop();
		int spread = a[y][x] / 5;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= m || a[ny][nx] == -1) continue;
			temp[ny][nx] += spread;
			a[y][x] -= spread;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] += temp[i][j];
		}
	}
	return;
}

void go(vector<pair<int, int>>& v) {
	for (int i = v.size() - 1; i > 0; i--) {
		a[v[i].first][v[i].second] = a[v[i - 1].first][v[i - 1].second];
	}
	a[v[0].first][v[0].second] = 0;
	return;
}


int main() {
	cin >> n >> m >> t;
	bool flag = true;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (a[i][j] == -1) {
				if (flag) {
					v1 = cleanairRoute(i, j, dy1, dx1);
					flag = false;
				}
				else {
					v2 = cleanairRoute(i, j, dy2, dx2);
				}
			}
		}
	}

	while (t--) {
		dust(dy1, dx1);
		go(v1);
		go(v2);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != -1)
				ret += a[i][j];
		}
	}
	cout << ret << '\n';

}