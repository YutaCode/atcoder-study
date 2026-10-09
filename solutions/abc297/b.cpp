#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	string s;
	cin >> s;
	int k, r1, r2, b1, b2;

	rep(i, 8) {
		if (s[i] == 'B') {
			b1 = i;
			break;
		}
	}

	for (int i = b1 + 1; i < 8; i++) {
		if (s[i] == 'B') {
			b2 = i;
			break;
		}
	}

	rep(i, 8) {
		if (s[i] == 'R') {
			r1 = i;
			break;
		}
	}

	for (int i = r1 + 1; i < 8; i++) {
		if (s[i] == 'R') {
			r2 = i;
			break;
		}
	}
	
	rep(i, 8) {
		if (s[i] == 'K') {
			k = i;
		}
	}

	if ((b1 + b2) % 2 == 1 && r1 < k && k < r2) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}