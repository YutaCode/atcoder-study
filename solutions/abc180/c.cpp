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
	ll n;
	cin >> n;
	vector<ll> a;

	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) a.push_back(i);
	}

	int m = a.size();
	rep(i, m) {
		if (n / a[i] != a[i]) a.push_back(n / a[i]);
	}

	sort(a.begin(), a.end());

	for (ll x : a) cout << x << endl;
	return 0;
}