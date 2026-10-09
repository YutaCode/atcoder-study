#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <math.h>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> s(n);
	rep(i, n) cin >> s[i];
	int ans = 0;

	rep(i, n) {
		bool is_found = false;
		for (int a = 1; a <= 1000; a++) {
			for (int b = 1; b <= 1000; b++) {
				if (4 * a * b + 3 * a + 3 * b == s[i]) is_found = true;
			}
		}
		if (!is_found) ans++;
	}

	cout << ans << endl;
	return 0;
}