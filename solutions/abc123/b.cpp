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
	vector<int> p(5);
	rep(i, 5) cin >> p[i];

	sort(p.begin(), p.end(), [](int a, int b) {
		return (a + 9) % 10 > (b + 9) % 10;
	});

	int ans = 0;
	rep(i, 4) ans += (p[i] + 9) / 10 * 10;

	ans += p[4];

	cout << ans << endl;
	return 0;
}