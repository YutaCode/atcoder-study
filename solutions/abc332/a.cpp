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
	int n, s, k;
	cin >> n >> s >> k;

	int ans = 0;

	rep(i, n) {
		int p, q;
		cin >> p >> q;

		ans += p * q;
	}

	if (ans < s) ans += k;

	cout << ans << endl;
	return 0;
}