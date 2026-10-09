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
	int n, s, m, l;
	cin >> n >> s >> m >> l;

	int ans = 1000000;

	rep(i, 100)rep(j, 100)rep(k, 100) {
		if (6 * i + 8 * j + 12 * k < n) continue;

		ans = min(ans, s * i + m * j + l * k);
	}

	cout << ans << endl;
	return 0;
}