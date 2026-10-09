#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
	string s;
	cin >> s;
	ll n = s.size();
	map<char, ll> mp;
	bool ok = false;
	for (char item : s) mp[item]++;
	ll ans = n * (n - 1) / 2;
	for (pair<char, ll> pr : mp) {
		if (pr.second > 1) ok = true;
		ans -= pr.second * (pr.second - 1) / 2;
	}
	if (ok) ans++;
	cout << ans << endl;
	return 0;
}