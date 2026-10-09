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

	int m = 1000000, ans = 0;
	rep(i, n) {
		int p;
		cin >> p;

		if (p <= m) {
			ans++;
			m = p;
		}
	}

	cout << ans << endl;
	return 0;
}