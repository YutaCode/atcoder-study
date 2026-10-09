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
	vector<int> b(n);
	rep(i, n) cin >> a[i] >> b[i];

	int tmp = 0, ans = 1000000;
	rep(i, n)rep(j, n) {
		if (i == j) tmp = a[i] + b[j];
		else tmp = max(a[i], b[j]);

		ans = min(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}