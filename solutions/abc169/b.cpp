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
	int n;
	cin >> n;

	ll ans = 1;
	ll lim = 1000000000000000000LL;
	vector<ll> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	rep(i, n) {
		if (ans * a[i] > lim) {
			cout << "-1" << endl;
			return 0;
		}
		if ((ans % 100000007) * (a[i] % 100000007) % 100000007 != (ans * a[i]) % 100000007) {
			cout << "-1" << endl;
			return 0;
		}

		ans *= a[i];
	}
	cout << ans << endl;
	return 0;
}