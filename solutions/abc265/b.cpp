#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	ll n, m;
	ll t;
	cin >> n >> m >> t;
	vector<ll> a(n - 1);
	rep(i, n - 1) cin >> a[i];
	
	vector<ll> bonus(100010);

	rep(i, m) {
		ll x, y;
		cin >> x >> y;
		bonus[x - 2] = y;
	}

	rep(i, n - 1) {
		t -= a[i];
		if (t <= 0) {
			cout << "No" << endl;
			return 0;
		}
		t += bonus[i];
	}
	cout << "Yes" << endl;
    return 0;
}