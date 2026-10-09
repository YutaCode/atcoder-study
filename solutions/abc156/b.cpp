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

	int res = 1;
	int ans = 0;
	while (res <= n) {
		res *= k;
		ans++;
	}
	cout << ans << endl;
	return 0;
}