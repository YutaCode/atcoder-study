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
	int n, t, a;
	cin >> n >> t >> a;

	double min = 10000.;
	int ans = 0;

	rep(i, n) {
		int h;
		cin >> h;

		if (abs(t - h * 0.006 - a) < min) {
			ans = i + 1;
			min = abs(t - h * 0.006 - a);
		}
	}

	cout << ans << endl;
	return 0;
}