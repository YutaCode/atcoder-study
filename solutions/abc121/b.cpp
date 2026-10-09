#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, m, c;
	cin >> n >> m >> c;
	vector<int> b(m);
	rep(i, m) cin >> b[i];

	int ans = 0;
	rep(i, n) {
		int res = 0;
		rep(j, m) {
			int a; cin >> a;
			res += a * b[j];
		}
		if (res + c > 0) ans++;
	}

	cout << ans << endl;
	return 0;
}