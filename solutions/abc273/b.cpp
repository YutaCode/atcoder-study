#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	long long x;
	int k;
	cin >> x >> k;

	rep(i, k) {
		long long n = 10;
		rep(j, i) n *= 10;

		x += n / 2;
		x = x / n * n;
	}

	cout << x << endl;
	return 0;
}