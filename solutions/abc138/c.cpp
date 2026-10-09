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
	vector<int> v(n);
	rep(i, n) cin >> v[i];
	sort(v.begin(), v.end());
	double ans = (double)v[0];

	rep(i, n - 1) {
		ans = (ans + (double)v[i + 1]) / 2.;
	}

	printf("%5f\n", ans);
	return 0;
}