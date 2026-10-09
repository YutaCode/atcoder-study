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
	cin >> n;
	string s;
	cin >> s;

	int tmp = 0, ans = 0;
	int cnt = 0;
	
	rep(i, 26) {
		rep(j, n) {
			if (s[j] == (i + 'a')) cnt++; else cnt = 0;
			tmp = max(tmp, cnt);
		}
		ans += tmp;
		tmp = 0; cnt = 0;
	}

	cout << ans << endl;
	return 0;
}