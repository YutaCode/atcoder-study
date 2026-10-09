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
	vector<int> h(n);
	rep(i, n) cin >> h[i];

	int ans = 0, tmp = 0;
	rep(i, n - 1) {
		if (h[i + 1] - h[i] <= 0) tmp++; else tmp = 0;
		ans = max(ans, tmp);
	}
	
	cout << ans << endl;
	return 0;
}