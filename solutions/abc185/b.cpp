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
	int n, m, t;
	cin >> n >> m >> t;
	int now = n; //現在のバッテリー残量
	vector<int> a(m);
	vector<int> b(m);
	rep(i, m) cin >> a[i] >> b[i];

	rep(i, m) {
		if (i == 0) {
			now -= a[i];
		}
		else {
			now -= (a[i] - b[i - 1]);
		}

		if (now <= 0) {
			cout << "No" << endl;
			return 0;
		}

		now += (b[i] - a[i]);
		now = min(n, now);
	}

	if (now - (t - b[m - 1]) > 0) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}