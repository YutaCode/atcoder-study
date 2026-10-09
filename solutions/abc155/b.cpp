#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	rep(i, n) {
		if (a[i] % 2 != 0) continue;
		else {
			if (a[i] % 3 != 0 && a[i] % 5 != 0) {
				cout << "DENIED" << endl;
				return 0;
			}
		}
	}

	cout << "APPROVED" << endl;
	return 0;
}