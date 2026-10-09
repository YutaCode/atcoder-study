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
	long long a, b, c;
	cin >> a >> b >> c;

	long long mod = 1000000007;

	long long ab = ((a % mod) * (b % mod)) % mod;
	long long ans = (ab * (c % mod)) % mod;

	cout << ans << endl;
	return 0;
}