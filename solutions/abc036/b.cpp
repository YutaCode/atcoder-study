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
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	vector<string> t(n, string(n, 'x'));

	rep(i, n)rep(j, n) t[j][n - i - 1] = s[i][j];

	rep(i, n) cout << t[i] << endl;

	return 0;
}