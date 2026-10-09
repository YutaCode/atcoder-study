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
	int n, x;
	cin >> n >> x;
	x *= 100;

	double al = 0.;

	rep(i, n) {
		int v, p;
		cin >> v >> p;

		al += v * p;

		if (al > x) {
			cout << i + 1 << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;
}