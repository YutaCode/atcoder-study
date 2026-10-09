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
	string s;
	cin >> s;

	int n = (int)s.size();
	int x1 = stoi(s);

	int x2 = 0;
	rep(i, n) {
		x2 += (s[i] - '0');
	}

	if (x1 % x2 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}