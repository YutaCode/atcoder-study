#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> w(n);
	rep(i, n) cin >> w[i];

	int ans = 1000000;
	for (int t = 1; t < n; t++) {
		int s1 = 0, s2 = 0;
		for(int i = 0; i < t; i++)  s1 += w[i];
		for (int i = t; i < n; i++) s2 += w[i];

		ans = min(ans, abs(s1 - s2));
	}

	cout << ans << endl;
	return 0;
}