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
	int n, m;
	cin >> n >> m;

	int l = -1, r = 100001;

	rep(i, m) {
		int lx, rx;
		cin >> lx >> rx;

		l = max(l, lx);
		r = min(r, rx);
	}

	cout << max(0, r - l + 1) << endl;
	return 0;
}