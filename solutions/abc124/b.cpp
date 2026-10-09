#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n; cin >> n;

	int mx = 0; int ans = 0;
	rep(i, n) {
		int h; cin >> h;
		if (h >= mx) {
			ans++;
			mx = h;
		}
	}
	cout << ans << endl;
	return 0;
}