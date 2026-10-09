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
	int n, d;
	cin >> n >> d;

	int ans = 0;
	rep(i, n) {
		long long a, b;
		cin >> a >> b;
		double res = sqrt(a * a + b * b);

		if (res <= d) ans++;
	}
	cout << ans << endl;
	return 0;
}