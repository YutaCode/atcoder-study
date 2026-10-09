#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	string s, t;
	cin >> s >> t;

	int n = (int)s.size();
	rep(i, n - 1) {
		if ((s[i + 1] - s[i] + 26) % 26 != (t[i + 1] - t[i] + 26) % 26) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}