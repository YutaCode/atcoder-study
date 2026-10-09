#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	ll d;
	cin >> d;

	ll ans = 100000000000000000;
	for (ll i = 0; i * i < d; i++) {
		ll y = sqrt(d - i * i);
		ans = min(ans, abs(i * i + y * y - d));
		y++;
		ans = min(ans, abs(i * i + y * y - d));
	}

	cout << ans << endl;
	return 0;
}