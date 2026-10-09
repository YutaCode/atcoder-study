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
		if (s[i] == '.') break;
		cout << s[i];
	}
	cout << endl;
	return 0;
}