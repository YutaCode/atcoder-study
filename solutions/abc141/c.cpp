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
	int n, k, q;
	cin >> n >> k >> q;

	vector<int> c(n, 0);
	rep(i, q) {
		int a;
		cin >> a;
		c[a - 1]++;
	}

	rep(i, n) {
		if (q - c[i] < k) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}