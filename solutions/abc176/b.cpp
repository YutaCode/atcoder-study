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

	int res = 0;
	int n = (int)s.size();
	rep(i, n) {
		int x = s[i] - '0';
		res += x;
	}

	cout << (res % 9 == 0 ? "Yes" : "No") << endl;
	return 0;
}