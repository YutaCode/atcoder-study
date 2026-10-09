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
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	rep(i, h)rep(j, w) cin >> a[i][j];

	int mn = 101;
	rep(i, h)rep(j, w) mn = min(mn, a[i][j]);

	int ans = 0;
	rep(i, h)rep(j, w) ans += a[i][j] - mn;

	cout << ans << endl;
	return 0;
}