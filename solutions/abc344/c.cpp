#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
	int n;
	cin >> n;
	vector<ll> a(n);
	rep(i, n) cin >> a[i];
	int m;
	cin >> m;
	vector<ll> b(m);
	rep(i, m) cin >> b[i];
	int l;
	cin >> l;
	vector<ll> c(l);
	rep(i, l) cin >> c[i];
	set<ll> s;

	rep(i, n)rep(j, m)rep(k, l) {
		s.insert(a[i] + b[j] + c[k]);
	}

	int q;
	cin >> q;
	rep(i, q) {
		int x;
		cin >> x;
		if (s.count(x)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}