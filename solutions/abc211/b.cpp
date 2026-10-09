#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	vector<string> s(4);
	rep(i, 4) cin >> s[i];
	int ans = 0;

	rep(i, 4) {
		if (s[i] == "H") ans++;
		if (s[i] == "2B") ans += 10;
		if (s[i] == "3B") ans += 100;
		if (s[i] == "HR") ans += 1000;
	}

	if (ans == 1111) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}