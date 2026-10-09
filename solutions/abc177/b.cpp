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
	string s, t;
	cin >> s >> t;

	int ns = (int)s.size();
	int nt = (int)t.size();

	int ans = 10000000;
	rep(i, ns - nt + 1) {
		int w = 0;
		rep(j, nt) {
			if (s[j + i] != t[j]) w++;
		}
		ans = min(ans, w);
	}

	cout << ans << endl;
	return 0;
}