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
	int n, l, r;
	cin >> n >> l >>r;

	rep(i, n) {
		int a;
		cin >> a;
		if (a < l) cout << l << " ";
		else if (a > r) cout << r << " ";
		else cout << a << " ";
	}

	cout << endl;
	return 0;
}