#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	sort(a.begin(), a.end());

	int ans = 1;
	rep(i, n - 1) {
		if (a[i] != a[i + 1]) ans++;
	}

	cout << ans << endl;
	return 0;
}