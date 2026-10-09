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
	int n;
	cin >> n;
	vector<int> x(n);
	vector<int> y(n);
	rep(i, n) cin >> x[i] >> y[i];

	int ans = 0;
	rep(i, n)rep(j, i) {
		if (abs(((double)y[j] - (double)y[i]) / ((double)x[j] - (double)x[i])) <= 1) ans++;
	}

	cout << ans << endl;
	return 0;
}