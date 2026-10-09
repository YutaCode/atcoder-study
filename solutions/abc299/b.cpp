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
	int n, t;
	cin >> n >> t;

	vector<int> c(n);
	rep(i, n) cin >> c[i];
	vector<int> r(n);
	rep(i, n) cin >> r[i];

	int mx1 = 0, mx2 = 0;
	int idx1 = 0, idx2 = 0;
	int count = 0;
	rep(i, n) {
		if (c[i] == t) {
			count++;
			if (r[i] > mx1) {
				mx1 = r[i];
				idx1 = i + 1;
			}
		}
		if (c[i] == c[0]) {
			if (r[i] > mx2) {
				mx2 = r[i];
				idx2 = i + 1;
			}
		}
	}

	if (count > 0) cout << idx1 << endl;
	else cout << idx2 << endl;
	return 0;
}