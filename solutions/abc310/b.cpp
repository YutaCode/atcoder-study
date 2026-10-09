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

	vector<int> p(n);
	vector<vector<int>> f(n);
	rep(i, n) {
		cin >> p[i];
		int c;
		cin >> c;
		
		f[i] = vector<int>(c);
		rep(j, c) cin >> f[i][j];
	}

	rep(i, n)rep(j, n) {
		if (i == j) continue;

		if (p[i] < p[j]) continue;

		bool x = true; //i番目の商品の機能のすべてがj番目の商品に含まれていたらtrue
		rep(k, (int)f[i].size()) if (find(f[j].begin(), f[j].end(), f[i][k]) == f[j].end()) x = false;
		if (!x) continue;

		if (p[i] > p[j] || (int)f[j].size() > (int)f[i].size()) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}