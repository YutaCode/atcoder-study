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
	vector<ll> xx;
	vector<ll> a(n);
	
	rep(i, n) {
		ll x;
		cin >> x;

		xx.push_back(x);
		if (i == 0) a[i] = x;
		else a[i] = a[i - 1] + x;
	}

	ll ans = 0;
	ll num = 1000000007;
	for (int i = 1; i < n; i++) {
		ans = ((ans % num) + (xx[i] % num) * (a[i - 1] % num)) % num;
	}

	cout << ans << endl;
	return 0;
}