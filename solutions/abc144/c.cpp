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
	ll n;
	cin >> n;

	ll ans = 1000000000000LL;
	for (ll i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			ll j = n / i;
			ans = min(ans, i + j - 2);
		}
	}

	cout << ans << endl;
	return 0;
}