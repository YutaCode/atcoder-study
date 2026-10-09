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
		if (i % 2 == 0) {
			if (isupper(s[i])) {
				cout << "No" << endl;
				return 0;
			}
		}
		else {
			if (islower(s[i])) {
				cout << "No" << endl;
				return 0;
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}