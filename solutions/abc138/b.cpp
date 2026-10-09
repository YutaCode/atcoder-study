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

	double res = 0;
	rep(i, n) {
		res += 1 / (double)a[i];
	}

	cout << fixed << setprecision(10) << 1 / res << endl;
	return 0;
}