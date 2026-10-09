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
	int n;
	cin >> n;
	vector <int> a(n);
	rep(i, n) cin >> a[i];

	int res = 0;

	rep(i, n) if (a[i] > 10) res += a[i] - 10;

	cout << res << endl;
	return 0;
}