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
	ll x, y;
	cin >> x >> y;

	int ans = 0;
	while (x <= y) {
		x *= 2;
		ans++;
	}

	cout << ans << endl;
	return 0;
}