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
	int n; ll x;
	cin >> n >> x;

	vector<ll> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	rep(i, n) {
		ll y = *lower_bound(a.begin(), a.end(), a[i] + x);

		if (y == a[i] + x) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}