#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	int x = 0;
	rep(i, n) {
		int y;
		cin >> y;
		a[i] = (x + y) % 360;
		x += y;
	}

	a.push_back(0);
	a.push_back(360);
	sort(a.begin(), a.end());

	int ans = -1;
	rep(i, n + 1) ans = max(ans, a[i + 1] - a[i]);

	cout << ans << endl;
	return 0;
}