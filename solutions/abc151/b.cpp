#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, k, m;
	cin >> n >> k >> m;

	int score = 0;
	rep(i, n - 1) {
		int a;
		cin >> a;
		score += a;
	}

	int ans = m * n - score;
	if (ans <= 0) ans = 0;
	if (ans > k) ans = -1;

	cout << ans << endl;
	return 0;
}