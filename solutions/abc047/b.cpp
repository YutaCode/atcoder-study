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
	int w, h, n;
	cin >> w >> h >> n;

	int left = 0, right = w, upper = h, lower = 0;

	rep(i, n) {
		int x, y, a;
		cin >> x >> y >> a;

		if (a == 1) left = max(left, x);
		if (a == 2) right = min(right, x);
		if (a == 3) lower = max(lower, y);
		if (a == 4) upper = min(upper, y);
	}

	if (right - left <= 0) {
		cout << 0 << endl;
		return 0;
	}
	if (upper - lower <= 0) {
		cout << 0 << endl;
		return 0;
	}

	cout << (right - left) * (upper - lower) << endl;
	return 0;
}