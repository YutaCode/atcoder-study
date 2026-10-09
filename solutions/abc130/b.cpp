#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> l(n);
	rep(i, n) cin >> l[i];

	int ans = 1, tmp = 0;
	rep(i, n) {
		tmp += l[i];
		if (tmp <= x) ans++;
	}

	cout << ans << endl;
	return 0;
}