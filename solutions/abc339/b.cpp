#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int h, w, n;
	cin >> h >> w >> n;

	vector<int> dx = { -1, 0, 1, 0 };
	vector<int> dy = { 0, 1, 0, -1 };

	vector<vector<char>> g(h, vector<char>(w, '.'));

	int x = 0, y = 0;
	auto idx = dx.begin();
	auto idy = dy.begin();

	rep(i, n) {
		if (g[x][y] == '.') {
			g[x][y] = '#';

			idx++; idy++;
			if (idx == dx.end()) idx = dx.begin();
			if (idy == dy.end()) idy = dy.begin();

		}
		else {
			g[x][y] = '.';

			if (idx == dx.begin()) {
				idx = dx.end() - 1;
				idy = dy.end() - 1;
			}
			else {
				idx--;
				idy--;
			}
		}

		x += *idx;
		y += *idy;
		if (x >= h) x = 0;
		else if (x < 0) x = h - 1;
		if (y == w) y = 0;
		else if (y < 0) y = w - 1;

	}

	rep(i, h) {
		rep(j, w) {
			cout << g[i][j];
		}
		cout << endl;
	}

	return 0;
}