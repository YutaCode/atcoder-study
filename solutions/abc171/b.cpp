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
	vector<int> p(n);
	rep(i, n) cin >> p[i];

	int ans = 0;
	sort(p.begin(), p.end());
	rep(i, k) {
		ans += p[i];
	}

	cout << ans << endl;
	return 0;
}