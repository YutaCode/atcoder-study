#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int h, w, x, y;
	cin >> h >> w >> x >> y;
	x--; y--;
	vector<string> s(h);
	rep(i, h) cin >> s[i];

	int ans = 1; //(x, y)を含める
	rep(i, x) { //上側を調べる
		if (s[x - 1 - i][y] == '#') break;
		ans++;
	}
	rep(i, y) { //左側を調べる
		if (s[x][y - 1 - i] == '#') break;
		ans++;
	}
	rep(i, h - x - 1) { //下側を調べる
		if (s[x + 1 + i][y] == '#') break;
		ans++;
	}
	rep(i, w - y - 1) { //下側を調べる
		if (s[x][y + 1 + i] == '#') break;
		ans++;
	}

	cout << ans << endl;
	return 0;
}