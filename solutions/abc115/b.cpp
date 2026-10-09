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
	vector<int> p(n);
	rep(i, n) cin >> p[i];

	sort(p.begin(), p.end());

	int sum = 0;
	rep(i, n - 1) {
		sum += p[i];
	}
	sum += p[n - 1] / 2;

	cout << sum << endl;
	return 0;
}