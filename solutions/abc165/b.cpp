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
	long long x;
	cin >> x;

	long long res = 100;
	int ans = 0;

	while (res < x) {
		res += res / 100;
		ans++;
	}

	cout << ans << endl;
	return 0;
}