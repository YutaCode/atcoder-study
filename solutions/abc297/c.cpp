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
	int h, w;
	cin >> h >> w;

	vector<string> s(h);
	rep(i, h) cin >> s[i];

	rep(i, h)rep(j, w - 1) {
		if (s[i][j] == 'T' && s[i][j + 1] == 'T') {
			s[i][j] = 'P';
			s[i][j + 1] = 'C';
		}
	}

	rep(i, h) cout << s[i] << endl;
	return 0;
}