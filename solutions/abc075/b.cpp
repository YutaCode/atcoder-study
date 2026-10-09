#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	rep(i, h) cin >> s[i];

	vector<vector<char>> p(h + 2, vector<char>(w + 2, '0'));

	rep(i, h)rep(j, w) {
		if (s[i][j] == '#') {
			rep(k, 3)rep(l, 3) if (p[i + k][j + l] != '#') p[i + k][j + l]++;
			p[i + 1][j + 1] = '#';
		}
	}

	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cout << p[i][j];
		}
		cout << endl;
	}

	return 0;
}