#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#include <queue>
#include <bitset>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int n, m, x;
	cin >> n >> m >> x;

	vector<int> c(n);
	vector<vector<int>> a(n, vector<int>(m));
	rep(i, n) {
		cin >> c[i];
		rep(j, m) cin >> a[i][j];
	}

	int ans = 10000000;
	rep(i, 1 << n) {
		vector<int> score(m, 0);
		bitset<12> b(i);
		int cost = 0;
		bool ok = true;
		
		rep(j, n) {
			if (b[j] == 1) {
				cost += c[j];
				rep(k, m) score[k] += a[j][k];
			}
		}

		for (int s : score) if (s < x) ok = false;

		if (ok) ans = min(ans, cost);
	}

	cout << (ans == 10000000 ? -1 : ans) << endl;
	return 0;
}