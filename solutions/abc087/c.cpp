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
	int n;
	cin >> n;
	vector<vector<int>> a(2, vector<int>(n));
	rep(i, 2)rep(j, n) cin >> a[i][j];

	int ans = -1;
	rep(i, n) {
		int tmp = 0;
		for (int j = 0; j <= i; j++) {
			tmp += a[0][j];
		}
		for (int k = i; k < n; k++) {
			tmp += a[1][k];
		}

		ans = max(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}