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

	char x = s[0][0];
	rep(i, n - 1) s[i][0] = s[i + 1][0];
	rep(i, n - 1) s[n - 1][i] = s[n - 1][i + 1];
	for (int i = n - 1; i > 0; i--) s[i][n - 1] = s[i - 1][n - 1];
	for (int i = n - 1; i > 0; i--) s[0][i] = s[0][i - 1];
	s[0][1] = x;

	rep(i, n) cout << s[i] << endl;
	return 0;
}