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
	int n; cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	sort(a.begin(), a.end());

	cout << a[n - 1] - a[0] << endl;
	return 0;
}