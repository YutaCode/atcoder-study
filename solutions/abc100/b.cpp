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
	int d, n;
	cin >> d >> n;

	if (d == 0) {
		if (n == 100) cout << 101 << endl;
		else cout << n << endl;
	}
	else if (d == 1) {
		if (n == 100) cout << 10100 << endl;
		else cout << n * 100 << endl;
	}
	else {
		if (n == 100) cout << 1010000 << endl;
		else cout << n * 100 * 100 << endl;
	}

	return 0;
}