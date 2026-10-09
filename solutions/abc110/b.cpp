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
	int n, m, xh, yh;
	cin >> n >> m >> xh >> yh;

	vector<int> x(n);
	rep(i, n) cin >> x[i];
	vector<int> y(m);
	rep(i, m) cin >> y[i];

	sort(x.begin(), x.end());
	sort(y.begin(), y.end());

	int xx = max(xh, x[n - 1]);
	int yy = min(yh, y[0]);

	cout << (xx < yy ? "No War" : "War") << endl;
	return 0;
}