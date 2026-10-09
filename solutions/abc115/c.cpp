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
	int n, k;
	cin >> n >> k;

	vector<int> h(n);
	rep(i, n) cin >> h[i];

	sort(h.rbegin(), h.rend());

	int ans = 1000000001;
	rep(i, n - k + 1) ans = min(ans, h[i] - h[i + k - 1]);

	cout << ans << endl;
	return 0;
}