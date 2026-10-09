#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	vector<int> b(m);
	rep(i, m) cin >> b[i];

	rep(i, m) {
		bool is_find = false;
		rep(j, n) {
			if (b[i] == a[j]) {
				is_find = true;
				a[j] = 0;
				break;
			}
		}
		if (!is_find) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}