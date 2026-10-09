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
	rep(i, n) cin >> a[i];

	int mx = -1;
	rep(i, n)rep(j, i) {
		mx = max(mx, abs(a[i] - a[j]));
	}

	cout << mx << endl;
	return 0;
}