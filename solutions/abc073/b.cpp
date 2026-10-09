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
	int n; cin >> n;

	int ans = 0;
	rep(i, n) {
		int l, r;
		cin >> l >> r;
		ans += r - l + 1;
	}

	cout << ans << endl;
	return 0;
}