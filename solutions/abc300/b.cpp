#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	vector<string> a(h);
	rep(i, h) cin >> a[i];
	vector<string> b(h);
	rep(i, h) cin >> b[i];

	rep(i, h) a[i] += a[i];
	rep(i, h) a.push_back(a[i]);

	rep(i, h)rep(j, w) {
		bool is_found = true;
		rep(k, h) {
			if (a[i + k].substr(j, w) != b[k]) is_found = false;
		}

		if (is_found) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}