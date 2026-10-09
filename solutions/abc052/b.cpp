#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	string s;
	cin >> n >> s;

	int ans = 0, x = 0;

	rep(i, n) {
		if (s[i] == 'I') x++;
		else if (s[i] == 'D') x--;

		ans = max(ans, x);
	}

	cout << ans << endl;
	return 0;
}