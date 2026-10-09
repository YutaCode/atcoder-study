#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> p(n);
	rep(i, n) cin >> p[i];

	int ans = 0;
	for (int i = 1; i < n - 1; i++) {
		if (p[i] < p[i + 1] && p[i - 1] < p[i]) ans++;
		else if (p[i] < p[i - 1] && p[i + 1] < p[i]) ans++;
	}

	cout << ans << endl;
	return 0;
}