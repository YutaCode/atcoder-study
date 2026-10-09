#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;

	int n = (int)s.size();

	int ans = 1000000;
	rep(i, n - 2) {
		int x = stoi(s.substr(i, 3));
		ans = min(ans, abs(x - 753));
	}

	cout << ans << endl;
	return 0;
}