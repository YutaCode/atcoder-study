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

	int ans = 0;
	for (int i = 1; i < n; i++) {
		bool is_found1 = false, is_found2 = false;
		int cnt = 0;
		rep(j, 26) {
			is_found1 = (s.substr(0, i).find(j + 'a') != string::npos);
			is_found2 = (s.substr(i, n - i).find(j + 'a') != string::npos);
			if (is_found1 && is_found2) cnt++;
		}
		ans = max(ans, cnt);
	}

	cout << ans << endl;
	return 0;
}