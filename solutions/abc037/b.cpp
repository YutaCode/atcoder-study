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
	int n, q;
	cin >> n >> q;

	vector<int> a(n, 0);
	rep(i, q) {
		int l, r, t;
		cin >> l >> r >> t;
		l--; r--;

		for (int j = l; j <= r; j++) a[j] = t;
	}

	rep(i, n) cout << a[i] << endl;
	return 0;
}