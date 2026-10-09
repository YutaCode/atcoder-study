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
	int n; cin >> n;

	double ans = 0;
	rep(i, n) {
		double x;
		string u;
		cin >> x >> u;

		if (u == "JPY") ans += x;
		if (u == "BTC") ans += 380000.0 * x;
	}

	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}