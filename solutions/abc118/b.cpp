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
	int n, m;
	cin >> n >> m;

	vector<bool> fav(m, true); //全員が好きならtrue

	rep(i, n) {
		int k;
		cin >> k;
		vector<int> a(k);
		rep(j, k) cin >> a[j];

		for (int j = 1; j <= m; j++) {
			if (find(a.begin(), a.end(), j) == a.end()) fav[j - 1] = false; //1人でも好きでない人がいればfalse
		}
	}

	int cnt = 0;
	rep(i, m) cnt += fav[i];

	cout << cnt << endl;
	return 0;
}