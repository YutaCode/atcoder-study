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
	int n, m;
	cin >> n >> m;
	vector<int> p(m);
	rep(i, m) cin >> p[i];

	int left = 0, right = 0;
	for (int i = 1; i <= n; i++) {
		if (find(p.begin(), p.end(), i) == p.end()) {
			left = right;
			right = i;

			for (int j = right; j > left; j--) cout << j << " ";
		}
	}

	cout << endl;
	return 0;
}