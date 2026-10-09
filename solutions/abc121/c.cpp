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

	vector<pair<ll, ll>> c;

	rep(i, n) {
		int a, b;
		cin >> a >> b;
		c.push_back(make_pair(a, b));
	}

	sort(c.begin(), c.end());

	ll cnt = 0;
	ll ans = 0;
	rep(i, n) {
		if (cnt + c[i].second < m) {
			ans += c[i].first * c[i].second;
			cnt += c[i].second;
		}
		else {
			ans += c[i].first * (m - cnt);
			break;
		}
	}

	cout << ans << endl;
	return 0;
}