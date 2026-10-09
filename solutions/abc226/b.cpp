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
	vector<vector<int>> a(n);

	rep(i, n) {
		int l;
		cin >> l;
		a[i] = vector<int>(l);
		rep(j, l) cin >> a[i][j];
	}

	sort(a.begin(), a.end());

	int ans = 1;
	rep(i, n - 1) if (a[i] != a[i + 1]) ans++;

	cout << ans << endl;
	return 0;
}