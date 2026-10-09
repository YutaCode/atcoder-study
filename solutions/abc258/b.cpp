#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#include <queue>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int n;
	cin >> n;
	vector<string> a(n);
	rep(i, n) cin >> a[i];

	vector<int> dx = { -1, -1, -1, 0, 0, 1, 1, 1 };
	vector<int> dy = { -1, 0, 1, -1, 1, -1, 0, 1 };
	ll ans = 0;
	rep(i, n)rep(j, n)rep(k, 8) {
		ll tmp = 0;
		int x = i, y = j;

		rep(l, n) {
			tmp *= 10;
			tmp += (ll)(a[x][y] - '0');

			x += dx[k];
			if (x == -1) x = n - 1;
			if (x == n) x = 0;
			y += dy[k];
			if (y == -1) y = n - 1;
			if (y == n) y = 0;
		}

		ans = max(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}