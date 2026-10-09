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
	string s;
	cin >> s;

	rep(i, n - 1) {
		if (s[i] == 'a' && s[i + 1] == 'b') {
			cout << "Yes" << endl;
			return 0;
		}
		if (s[i] == 'b' && s[i + 1] == 'a') {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}