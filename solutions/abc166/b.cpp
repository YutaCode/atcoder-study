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
	int n, k;
	cin >> n >> k;

	vector<bool> p(n, false);
	rep(i, k) {
		int d;
		cin >> d;
		rep(i, d) {
			int a;
			cin >> a;
			p[a - 1] = true;
		}
	}

	int ans = 0;
	rep(i, n) {
		if (!p[i]) ans++;
	}

	cout << ans << endl;
	return 0;
}