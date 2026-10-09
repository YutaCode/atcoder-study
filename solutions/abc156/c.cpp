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
	vector<int> x(n);
	rep(i, n) cin >> x[i];
	sort(x.begin(), x.end());

	int ans = 10000000;
	for (int i = x[0]; i <= x[n - 1]; i++) {
		int tmp = 0;
		rep(j, n) {
			tmp += (i - x[j]) * (i - x[j]);
		}
		ans = min(ans, tmp);
	}

	cout << ans << endl;
}