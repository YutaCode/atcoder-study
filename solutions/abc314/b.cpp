#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> c(n);
	vector<vector<int>> a(n);

	rep(i, n) {
		cin >> c[i];
		a[i] = vector<int>(c[i]);
		rep(j, c[i]) cin >> a[i][j];
	}
	int x; cin >> x;

	vector<pair<int, int>> p;
	rep(i, n) {
		for (int k : a[i]) if (k == x) {
			p.push_back(make_pair(c[i], i + 1));
			break;
		}
	}

	sort(p.begin(), p.end());
	int ans = 0;
	for (pair<int, int> t : p) if (t.first == p[0].first) ans++;
	cout << ans << endl;
	for (pair<int, int> t : p) if (t.first == p[0].first) cout << t.second << " ";
	cout << endl;
	return 0;
}