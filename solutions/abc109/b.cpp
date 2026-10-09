#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<string> w(n);
	rep(i, n) cin >> w[i];

	rep(i, n)rep(j, i)if (w[i] == w[j]) {
		cout << "No" << endl;
		return 0;
	}

	rep(i, n - 1) {
		int l = (int)w[i].size();
		if (w[i][l - 1] != w[i + 1][0]) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}