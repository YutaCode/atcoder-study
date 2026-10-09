#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = (int)s.size();

	rep(i, n) {
		if (i % 2 == 0) {
			if (s[i] == 'L') {
				cout << "No" << endl;
				return 0;
			}
		}
		else {
			if (s[i] == 'R') {
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
	return 0;
}