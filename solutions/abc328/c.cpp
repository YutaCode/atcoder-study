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
	int n, q;
	cin >> n >> q;

	string s;
	cin >> s;

	vector<int> consecutiveCount(n, 0);
	for (int i = 1; i < n; ++i) {
		consecutiveCount[i] = consecutiveCount[i - 1] + (s[i] == s[i - 1]);
	}


	rep(i, q) {
		int l, r;
		cin >> l >> r;

		cout << consecutiveCount[r - 1] - (l > 0 ? consecutiveCount[l - 1] : 0) << endl;
	}
	return 0;
}