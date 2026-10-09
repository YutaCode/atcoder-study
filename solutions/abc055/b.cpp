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
	int n;
	cin >> n;

	long long ans = 1;
	int mod = 1000000007;

	for (int i = 1; i <= n; i++) {
		ans = ((ans % mod) * (i % mod)) % mod;
	}

	cout << ans << endl;
	return 0;
}