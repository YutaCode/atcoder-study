#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(n);
	rep(i, n) cin >> v[i];
	vector<int> c(n);
	rep(i, n) cin >> c[i];

	int x = 0, y = 0;
	rep(i, n) {
		if (v[i] > c[i]) {
			x += v[i]; y += c[i];
		}
	}

	cout << x - y << endl;
	return 0;
}