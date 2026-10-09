#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());

	int gcm = 0;
	int ans = 0;
	for (int i = 2; i <= a[n - 1]; i++) {
		int res = 0;
		rep(j, n) {
			if (a[j] % i == 0) res++;
		}

		if (res >= gcm) {
			gcm = res;
			ans = i;
		}
	}

	cout << ans << endl;
	return 0;
}