#include <iostream>
#include <vector>
#include <set>
#include <bitset>
#include <algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<int>> f(n);
	rep(i, n) f[i].push_back(i);

	rep(i, m) {
		int x, y;
		cin >> x >> y;
		x--; y--;

		f[x].push_back(y);
		f[y].push_back(x);
	}

	int ans = 0;
	rep(i, 1 << n) {
		bool ok = true;
		set<int> s;
		rep(j, n) if (i & (1 << j)) s.insert(j);

		for (int item1 : s) {
			for (int item2 : s) {
				if (find(f[item1].begin(), f[item1].end(), item2) == f[item1].end()) ok = false;
			}
		}

		if (ok) ans = max(ans, (int)s.size());
	}

	cout << ans << endl;
	return 0;
}