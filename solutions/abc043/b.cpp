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
	string ans = "";
	cin >> s;

	rep(i, (int)s.size()) {
		if (s[i] == 'B') {
			if (ans.size() == 0) continue;
			ans.pop_back();
		}
		if (s[i] == '0') ans += '0';
		if (s[i] == '1') ans += '1';
	}

	cout << ans << endl;
	return 0;
}