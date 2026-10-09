#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	for (int i = 1; i < n; i += 2) {
		a[i]--;
	}

	int ans = 0;
	rep(i, n) ans += a[i];

	if (ans <= x) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}