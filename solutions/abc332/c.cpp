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
	int n, m;
	string s;
	cin >> n >> m >> s;

	int nt = 0, lt = 0;
	int ltm = 0;
	rep(i, n) {
		if (s[i] == '0') {
			nt = 0;
			lt = 0;
		}
		if (s[i] == '1' && nt >= m) lt++;
		else if (s[i] == '1') nt++;
		if (s[i] == '2') lt++;

		ltm = max(ltm, lt);
	}

	cout << ltm << endl;
	return 0;
}