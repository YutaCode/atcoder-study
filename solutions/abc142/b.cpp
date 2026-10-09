#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int ans = 0;
	rep(i, n) {
		int h;
		cin >> h;
		if (h >= k) ans++;
	}

	cout << ans << endl;
	return 0;
}