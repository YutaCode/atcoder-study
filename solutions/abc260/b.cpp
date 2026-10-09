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
	int n, x, y, z;
	cin >> n >> x >> y >> z;
	vector<bool> p(n, false);
	vector<int> a(n); //数学
	vector<int> b(n); //英語
	vector<int> c(n); //合計
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];
	rep(i, n) c[i] = a[i] + b[i];

	vector<pair<int, int>> m;
	rep(i, n) m.push_back(make_pair(i, a[i]));
	sort(m.begin(), m.end(), [](pair<int, int> p1, pair<int, int> p2) {
		if (p1.second == p2.second) return p1.first < p2.first;
		return p1.second > p2.second;
		});

	rep(i, x) p[m[i].first] = true;

	int cnt = 0;
	rep(i, n) m[i] = make_pair(i, b[i]);
	sort(m.begin(), m.end(), [](pair<int, int> p1, pair<int, int> p2) {
		if (p1.second == p2.second) return p1.first < p2.first;
		return p1.second > p2.second;
		});

	rep(i, n) {
		if (cnt >= y) break;
		if (!p[m[i].first]) {
			p[m[i].first] = true;
			cnt++;
		}

	}

	cnt = 0;
	rep(i, n) m[i] = make_pair(i, c[i]);
	sort(m.begin(), m.end(), [](pair<int, int> p1, pair<int, int> p2) {
		if (p1.second == p2.second) return p1.first < p2.first;
		return p1.second > p2.second;
		});

	rep(i, n) {
		if (cnt >= z) break;
		if (!p[m[i].first]) {
			p[m[i].first] = true;
			cnt++;
		}
	}

	rep(i, n) if (p[i]) cout << i + 1 << endl;
	return 0;
}