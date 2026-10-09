#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n, m, x;
	cin >> n >> m >> x;

	int left = 0, right = 0;
	rep(i, m) {
		int a;
		cin >> a;

		if (a < x) left++;
		else right++;
	}

	cout << min(left, right) << endl;
	return 0;
}