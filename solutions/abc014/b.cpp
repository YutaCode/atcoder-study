#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n, x;
	cin >> n >> x;

	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int ans = 0;
	rep(i, n) {
		if (x & 1 << i) ans += a[i];
	}

	cout << ans << endl;
	return 0;
}