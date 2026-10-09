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
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	vector<ll> a(n);
	rep(i, n)rep(j, n) a[i] += (s[i][j] == 'o');
	vector<ll> b(n);
	rep(i, n)rep(j, n) b[j] += (s[i][j] == 'o');

	ll ans = 0;
	rep(i, n)rep(j, n) {
		if (a[i] * b[j] == 0) continue;
		if (s[i][j] == 'o') ans += (a[i] - 1) * (b[j] - 1);
	}

	cout << ans << endl;
	return 0;
}