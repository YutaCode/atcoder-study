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
	int n, k;
	cin >> n >> k;

	int res = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			res += 100 * i + j;
		}
	}

	cout << res << endl;
	return 0;
}