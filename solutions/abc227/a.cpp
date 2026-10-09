#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<stdio.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, k, a;
	cin >> n >> k >> a;
	vector<int> x(n);
	rep(i, n) x.at(i) = i;
	x.at(0) = n;

	if (n == 1) cout << n << endl;
	else cout << x.at(((k % n) + a - 1) % n) << endl;

	return 0;
}
