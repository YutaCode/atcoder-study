#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	int ans = 10000000;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n / i; j++) {
			int tmp = abs(i - j) + (n - i * j);
			ans = min(ans, tmp);
		}
	}

	cout << ans << endl;
	return 0;
}