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
	int n, m;
	cin >> n >> m;
	vector<vector<bool>> p(n, vector<bool> (n, false));

	rep(i, m) {
		int u, v;
		cin >> u >> v;
		u--; v--;
		p[u][v] = true;
	}

	int ans = 0;
	rep(i, n)rep(j, i)rep(k, j) {
		if (p[k][j] && p[j][i] && p[k][i]) ans++;
	}

	cout << ans << endl;
	return 0;
}