#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	vector<int> b(n);
	rep(i, n) cin >> b[i];
	vector<int> c(n - 1);
	rep(i, n - 1) cin >> c[i];

	int res = 0;
	rep(i, n) {
		if (i == 0) res += b[a[i] - 1];

		else {
			res += b[a[i] - 1];
			if (a[i] == a[i - 1] + 1) res += c[a[i - 1] - 1];
		}
	}

	cout << res << endl;
	return 0;
}