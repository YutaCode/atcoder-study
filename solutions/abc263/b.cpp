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
	vector<int> p(n - 1);
	rep(i, n - 1) cin >> p[i];

	int ans = 0;
	while (n != 1) {
		n = p[n - 2];
		ans++;
	}

	cout << ans << endl;
	return 0;
}