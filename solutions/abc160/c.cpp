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
	int k, n;
	cin >> k >> n;

	vector<int> a(2 * n);
	rep(i, n) cin >> a[i];
	rep(i, n) a[n + i] = a[i] + k;

	int ans = 1000000;
	rep(i, n) {
		ans = min(ans, a[i + n - 1] - a[i]);
	}

	cout << ans << endl;
	return 0;
}