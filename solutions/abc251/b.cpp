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
	int n, w;
	cin >> n >> w;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	vector<bool> p(w + 1, false);
	rep(i, n) if (a[i] <= w) p[a[i]] = true;
	rep(i, n)rep(j, i) if (a[i] + a[j] <= w) p[a[i] + a[j]] = true;
	rep(i, n)rep(j, i)rep(k, j) if (a[i] + a[j] + a[k] <= w) p[a[i] + a[j] + a[k]] = true;

	int ans = 0;
	rep(i, w + 1) ans += p[i];

	cout << ans << endl;
	return 0;
}