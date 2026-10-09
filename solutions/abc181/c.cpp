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
	int n;
	cin >> n;
	vector<pair<int, int>> r(n);
	rep(i, n) {
		int x, y;
		cin >> x >> y;
		r[i] = make_pair(x, y);
	}

	rep(i, n)rep(j, i)rep(k, j) {
		if ((r[k].first - r[i].first) * (r[j].second - r[i].second) == (r[j].first - r[i].first) * (r[k].second - r[i].second)) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}