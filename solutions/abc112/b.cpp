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
	int n, t;
	cin >> n >> t;

	int ans = 10000;
	rep(i, n) {
		int c, x;
		cin >> c >> x;
		if (x <= t) ans = min(ans, c);
	}

	if (ans == 10000) {
		cout << "TLE" << endl;
		return 0;
	}

	cout << ans << endl;
	return 0;
}