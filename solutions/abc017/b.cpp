#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string x;
	cin >> x;

	rep(i, (int)x.size()) {
		if (x[0] == 'h') {
			cout << "NO" << endl;
			return 0;
		}
		if (x[x.size() - 1] == 'c') {
			cout << "NO" << endl;
			return 0;
		}
		if (x[i] != 'c' && x[i] != 'h' && x[i] != 'o' && x[i] != 'k' && x[i] != 'u') {
			cout << "NO" << endl;
			return 0;
		}
	}

	rep(i, (int)x.size() - 1) {
		if (x[i] == 'c') {
			if (x[i + 1] != 'h') {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	for (int i = 1; i < (int)x.size(); i++) {
		if (x[i] == 'h') {
			if (x[i - 1] != 'c') {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;
	return 0;
}