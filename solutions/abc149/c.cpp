#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int x;
	cin >> x;
	vector<int> z;

	for (int i = 2; i <= 100003; i++) {
		bool y = true;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) y = false;
		}
		if (y) z.push_back(i);
	}

	sort(z.begin(), z.end());
	auto it = lower_bound(z.begin(), z.end(), x);
	int idx = distance(z.begin(), it);

	cout << z[idx] << endl;
	return 0;
}