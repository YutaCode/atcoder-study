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
	int n, m;
	cin >> n >> m;
	vector<ll> a(n), b(n);
	vector<ll> c(m), d(m);

	rep(i, n) cin >> a[i] >> b[i];
	rep(i, m) cin >> c[i] >> d[i];

	rep(i, n) {
		int idx = 0;
		ll ans = 100000000000000000;
		rep(j, m) {
			ll tmp = abs(a[i] - c[j]) + abs(b[i] - d[j]);
			if (tmp < ans) {
				ans = tmp;
				idx = j + 1;
			}
		}
		cout << idx << endl;
	}

	return 0;
}