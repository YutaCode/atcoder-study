#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

long long mod(long long a, long long b) {
	long long num = 998244353;
	long long ans = (a % num) * (b % num) % num;
	return ans;
}

int main() {
	long long a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	cout << (mod(mod(a, b), c) - mod(mod(d, e), f) + 998244353) % 998244353 << endl;

  return 0;
}