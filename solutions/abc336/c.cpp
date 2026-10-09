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
#include <queue>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;
	n--;

	ll ans = 0;
	ll tmp = 1;
	while (n > 0) {
		ans += n % 5LL * tmp;
		n /= 5;
		tmp *= 10;
	}

	cout << 2LL * ans << endl;
	return 0;
}