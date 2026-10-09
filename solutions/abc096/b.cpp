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
	vector<int> x(3);
	rep(i, 3) cin >> x[i];

	sort(x.begin(), x.end());

	int k; cin >> k;
	rep(i, k) {
		x[2] *= 2;
	}

	int ans = 0;
	rep(i, 3) {
		ans += x[i];
	}

	cout << ans << endl;
	return 0;
}