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
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> p(n);
	vector<int> x(n);
	rep(i, n) cin >> a[i] >> p[i] >> x[i];

	int ans = 1000000001;
	rep(i, n) {
		if (x[i] - a[i] > 0) {
			ans = min(ans, p[i]);
		}
	}
	if (ans == 1000000001) ans = -1;
	cout << ans << endl;
	return 0;
}