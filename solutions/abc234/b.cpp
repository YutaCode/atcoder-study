#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<vector<int>> r(n, vector<int>(2));
	rep(i, n)rep(j, 2) cin >> r[i][j];

	int mx = -1;
	rep(i, n)rep(j, i) {
		int d = (r[i][0] - r[j][0]) * (r[i][0] - r[j][0]) + (r[i][1] - r[j][1]) * (r[i][1] - r[j][1]);
		mx = max(mx, d);
	}

	cout << fixed << setprecision(10) << sqrt(mx) << endl;
	return 0;
}