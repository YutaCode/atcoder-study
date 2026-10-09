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

	vector<int> h(n);
	rep(i, n) cin >> h[i];
	vector<bool> g(n, true);

	rep(i, m) {
		int a, b;
		cin >> a >> b;
		a--; b--;

		if (h[a] >= h[b]) g[b] = false;
		if (h[b] >= h[a]) g[a] = false;
	}

	int ans = 0;
	rep(i, n) {
		ans += g[i];
	}

	cout << ans << endl;
	return 0;
}