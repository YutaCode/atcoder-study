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
	vector<ll> a(n + 1);
	rep(i, n + 1) cin >> a[i];
	vector<ll> b(n);
	rep(i, n) cin >> b[i];

	ll ans = 0;
	rep(i, n) {
		ll tmp = min(a[i], b[i]);
		a[i] -= tmp;
		b[i] -= tmp;
		ans += tmp;

		ll tmp2 = min(a[i + 1], b[i]);
		a[i + 1] -= tmp2;
		b[i] -= tmp2;
		ans += tmp2;

	}

	cout << ans << endl;
	return 0;
}