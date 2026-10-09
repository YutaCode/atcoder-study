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
	int n;
	cin >> n;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	int idx = 0;
	int tmp = 0, mx = 0;
	sort(s.begin(), s.end());

	rep(i, n - 1) {
		if (i == 0) tmp++;
		if (s[i] == s[i + 1]) tmp++; else tmp = 1;

		if (mx < tmp) {
			mx = tmp;
			idx = i + 1;
		}
	}

	cout << s[idx] << endl;

	return 0;
}