#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	string s, t;
	cin >> n >> s >> t;

	string ans;
	rep(i, n) {
		ans += s[i];
		ans += t[i];
	}

	cout << ans << endl;
	return 0;
}