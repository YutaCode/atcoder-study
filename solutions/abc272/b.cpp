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
	int n, m;
	cin >> n >> m;
	vector<vector<bool>> p(m, vector<bool>(n, false));
	rep(i, m) {
		int k;
		cin >> k;
		rep(j, k) {
			int x;
			cin >> x;
			p[i][x - 1] = true;
		}
	}

	rep(i, n)rep(j, i) {
		bool is_same = false;
		rep(l, m) {
			if (p[l][i] && p[l][j]) is_same = true;
		}
		if (!is_same) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}