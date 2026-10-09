#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#include <queue>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

bool is_int (vector<int> x1, vector<int> x2) {
	double dd = 0;
	rep(i, x1.size()) {
		dd += (x1[i] - x2[i]) * (x1[i] - x2[i]);
	}

	double d = sqrt(dd);

	return d == (int)d;
}

int main() {
	int n, d;
	cin >> n >> d;
	vector<vector<int>> x(n, vector<int>(d));
	rep(i, n)rep(j, d) cin >> x[i][j];

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (is_int(x[i], x[j])) ans++;
		}
	}
	
	cout << ans << endl;
	return 0;
}