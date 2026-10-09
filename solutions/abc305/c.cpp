#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int h, w;
	cin >> h >> w;

	vector<string> s(h);
	rep(i, h) cin >> s[i];

	rep(i, h)rep(j, w) {
		int t = 0;
		if (s[i][j] == '#') continue;
		if (i != 0 && s[i - 1][j] == '#') t++;
		if (i != h - 1 && s[i + 1][j] == '#') t++;
		if (j != 0 && s[i][j - 1] == '#') t++;
		if (j != h - 1 && s[i][j + 1] == '#') t++;

		if (t >= 2) {
			cout << i + 1 << " " << j + 1 << endl;
			return 0;
		}
	}
	return 0;
}