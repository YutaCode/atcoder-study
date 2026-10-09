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
	long long n, k;
	cin >> n >> k;

	rep(i, k) {
		if (n % 200 == 0) n /= 200;
		else n = 1000 * n + 200;
	}

	cout << n << endl;
	return 0;
}