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

	long long ans = 0;
	rep(i, n + 1) {
		if (i % 3 == 0 || i % 5 == 0) {
			continue;
		}
		else ans += i;
	}

	cout << ans << endl;
	return 0;
}