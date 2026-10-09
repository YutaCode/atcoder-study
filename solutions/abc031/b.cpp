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
	int l, h, n;
	cin >> l >> h >> n;

	rep(i, n) {
		int a;
		cin >> a;

		if (a > h) cout << -1 << endl;
		else if (a < l) cout << l - a << endl;
		else cout << 0 << endl;
	}

	return 0;
}