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
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int i = 0;
	int now = 1;

	while (i < n) {
		now = a[now - 1];
		i++;

		if (now == 2) {
			cout << i << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;
}