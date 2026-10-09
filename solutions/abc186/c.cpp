#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		bool ans1 = true, ans2 = true;
		int i1 = i, i2 = i;
		while (i1 > 0) {
			if (i1 % 10 == 7) ans1 = false;
			i1 /= 10;
		}
		while (i2 > 0) {
			if (i2 % 8 == 7) ans2 = false;
			i2 /= 8;
		}

		if (ans1 && ans2) ans++;
	}

	cout << ans << endl;
	return 0;
}