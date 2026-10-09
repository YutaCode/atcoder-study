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
	int r, c;
	cin >> r >> c;

	vector<string> b(r);
	rep(i, r) cin >> b[i];

	vector<string> bb = b;

	rep(i, r)rep(j, c) {
		if (isdigit(b[i][j])) {
			int d = b[i][j] - '0';
			rep(k, r)rep(l, c) {
				if (abs(i - k) + abs(j - l) <= d) bb[k][l] = '.';
			}
		}
	}

	rep(i, r) cout << bb[i] << endl;
	return 0;
}