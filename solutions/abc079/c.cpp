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
	string s;
	cin >> s;
	vector<int> a;
	rep(i, s.size()) {
		a.push_back(s[i] - '0');
	}

	vector<char> op = { '+', '-' };
	

	rep(i, 2)rep(j, 2)rep(k, 2) {
		int ans = a[0];
		if (i == 0) ans += a[1];
		else ans -= a[1];
		if (j == 0) ans += a[2];
		else ans -= a[2];
		if (k == 0) ans += a[3];
		else ans -= a[3];

		if (ans == 7) {
			printf("%d%c%d%c%d%c%d=7\n", a[0], op[i], a[1], op[j], a[2], op[k], a[3]);
			return 0;
		}
	}
	
}