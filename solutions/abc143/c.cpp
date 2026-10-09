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

	int ans = 1;
	rep(i, n - 1) {
		if (s[i + 1] != s[i]) ans++;
	}

	cout << ans << endl;
	return 0;
}