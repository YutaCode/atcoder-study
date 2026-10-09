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
	int n;
	cin >> n;

	vector<pair<int, pair<string, int>>> r(n);
	rep(i, n) {
		string s;
		int p;
		cin >> s >> p;

		r[i] = make_pair(i + 1, make_pair(s, p));
	}

	sort(r.begin(), r.end(), [&](pair<int, pair<string, int>> a, pair<int, pair<string, int>> b) {
		if (a.second.first == b.second.first) return a.second.second > b.second.second;
		return a.second.first < b.second.first;
		});

	rep(i, n) cout << r[i].first << endl;
	return 0;
}