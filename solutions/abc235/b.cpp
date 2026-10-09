#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> h(n);
	rep(i, n) cin >> h[i];

	rep(i, n - 1) {
		if (h[i] >= h[i + 1]) {
			cout << h[i] << endl;
			return 0;
		}
	}
	cout << h[n - 1] << endl;
	return 0;
}