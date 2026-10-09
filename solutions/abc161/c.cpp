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
	ll n, k;
	cin >> n >> k;

	ll x = n % k;

	ll ans = 1000000000000000;
	ans = min(ans, abs(x));
	ans = min(ans, abs(x - k));

	cout << ans << endl;
	return 0;
}