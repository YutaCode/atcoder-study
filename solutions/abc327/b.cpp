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
	long long b; cin >> b;
	vector<long long> a;
	for(int i = 1; i <= 15; i++) {
		long long x = i;
		for(int j = 1; j < i; j++) {
			x *= i;
		}
		a.push_back(x);
	}

	rep(i, 15) {
		if (b == a[i]) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}