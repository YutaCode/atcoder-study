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

	int cnt1 = 0, cnt2 = 0;
	rep(i, s.size()) {
		if (i % 2 == 0 && s[i] == '1') cnt1++;
		if (i % 2 == 1 && s[i] == '0') cnt1++;
		if (i % 2 == 0 && s[i] == '0') cnt2++;
		if (i % 2 == 1 && s[i] == '1') cnt2++;
	}

	cout << min(cnt1, cnt2) << endl;
	return 0;
}