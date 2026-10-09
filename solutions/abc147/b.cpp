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
	int ans = 0;

	rep(i, (n + 1) / 2) {
		if (s[i] != s[n - 1 - i]) ans++;
	}

	cout << ans << endl;
	return 0;
}