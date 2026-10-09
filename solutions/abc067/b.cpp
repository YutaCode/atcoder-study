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
	int n, k;
	cin >> n >> k;
	vector<int> l(n);
	rep(i, n) cin >> l[i];

	sort(l.begin(), l.end(), [](int a, int b) {
		return a > b;
		});

	int ans = 0;
	rep(i, k) {
		ans += l[i];
	}

	cout << ans << endl;
	return 0;
}