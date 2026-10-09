#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n, m;
	cin >> n >> m;

	vector<pair<int, int>> c;

	rep(i, n + m) {
		int x;
		cin >> x;
		c.push_back(make_pair(x, i + 1));
	}

	sort(c.begin(), c.end());
	vector<int> a;
	vector<int> b;

	rep(i, n + m) {
		if (c[i].second <= n) a.push_back(i + 1);
		else b.push_back(i + 1);
	}

	rep(i, n) cout << a[i] << " ";
	cout << endl;
	rep(i, m) cout << b[i] << " ";
	cout << endl;

	return 0;
}