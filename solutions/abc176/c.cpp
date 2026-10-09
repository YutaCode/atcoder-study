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
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	ll ans = 0, mx = -1;
	rep(i, n) {
		if (a[i] > mx) mx = a[i];
		else ans += mx - a[i];
	}

	cout << ans << endl;
	return 0;
}