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
	int n, k;
	cin >> n >> k;

	int ans = 1;

	rep(i, n) {
		if (i == 0) ans *= k;
		else ans *= k - 1;
	}

	cout << ans << endl;
	return 0;
}