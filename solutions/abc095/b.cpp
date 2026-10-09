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
	int n, x;
	cin >> n >> x;

	int sum = 0;
	vector<int> m(n);
	rep(i, n) cin >> m[i];
	sort(m.begin(), m.end());

	rep(i, n) {
		sum += m[i];
	}

	cout << n + (x - sum) / m[0] << endl;
	return 0;
}