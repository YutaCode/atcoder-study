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
	string s, t;
	cin >> s >> t;
	int n = (int)s.size();

	int ans = 0;
	rep(i, n) {
		if (s[i] != t[i]) ans++;
	}

	cout << ans << endl;
	return 0;
}