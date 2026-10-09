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

	vector<string> a(h);
	rep(i, h) cin >> a[i];

	vector<bool> r(h, false), c(w, false);
	rep(i, h)rep(j, w) if (a[i][j] == '#') {
		r[i] = true;
		c[j] = true;
	}

	rep(i, h) {
		rep(j, w) {
			if (r[i] && c[j]) cout << a[i][j];
		}
		if(r[i]) cout << endl;
	}

	return 0;
}