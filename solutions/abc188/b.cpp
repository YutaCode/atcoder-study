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
	vector<int> b(n);
	rep(i, n) cin >> b[i];

	int ans = 0;
	rep(i, n) {
		ans += a[i] * b[i];
	}

	cout << (ans == 0 ? "Yes" : "No") << endl;
	return 0;
}