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
	string s;
	cin >> s;

	bool is_good = true;

	if (n % 2 == 0) is_good = false;
	if ((n - 1) / 2 % 3 == 0) {
		if (s[0] != 'b' || s[n - 1] != 'b') is_good = false;
	}
	if ((n - 1) / 2 % 3 == 1) {
		if (s[0] != 'a' || s[n - 1] != 'c') is_good = false;
	}
	if ((n - 1) / 2 % 3 == 2) {
		if (s[0] != 'c' || s[n - 1] != 'a') is_good = false;
	}

	rep(i, n) {
		if (s[i] != 'a' && s[i] != 'b' && s[i] != 'c') is_good = false;
	}

	rep(i, n - 1) {
		if (s[i] == 'a') {
			if (s[i + 1] != 'b') is_good = false;
		}
		if (s[i] == 'b') {
			if (s[i + 1] != 'c') is_good = false;
		}
		if (s[i] == 'c') {
			if (s[i + 1] != 'a') is_good = false;
		}
	}

	if (is_good) cout << (n - 1) / 2 << endl;
	else cout << -1 << endl;
	return 0;
}