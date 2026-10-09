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
	vector<int> b(n - 1);
	rep(i, n - 1) cin >> b[i];

	int ans = b[0];
	rep(i, n - 1) {
		if (i == n - 2) ans += b[i];
		else ans += min(b[i], b[i + 1]); 
	}

	cout << ans << endl;
	return 0;
}