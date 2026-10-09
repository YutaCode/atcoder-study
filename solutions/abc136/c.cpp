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
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	bool x = true;
	for (int i = n - 2; i >= 0; i--) {
		if (a[i + 1] - a[i] < -1) x = false;
		if (a[i + 1] - a[i] == -1) a[i]--;
	}

	if (x) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}