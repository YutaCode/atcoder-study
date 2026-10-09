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

int gcd(int a, int b, int c) {
	for (int i = min(min(a, b), c); i > 0; i--) {
		if (a % i == 0 && b % i == 0 && c % i == 0) return i;
	}
}

int main() {
	int k;
	cin >> k;


	int ans = 0;
	rep(a, k)rep(b, k)rep(c, k) {
		ans += gcd(a + 1, b + 1, c + 1);
	}

	cout << ans << endl;
	return 0;
}