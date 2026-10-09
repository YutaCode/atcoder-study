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

	rep(i, n) {
		if (s[i] == '6') s[i] = '9';
		else if (s[i] == '9') s[i] = '6';
	}

	reverse(s.begin(), s.end());

	cout << s << endl;
	return 0;
}