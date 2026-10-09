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
	int a, b;
	string s;
	cin >> a >> b >> s;

	bool is_good = true;
	int n = a + b + 1;
	rep(i, n) {
		if (i == a) {
			if (s[i] != '-') is_good = false;
		}
		else {
			if (!isdigit(s[i])) is_good = false;
		}
	}

	if (is_good) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}