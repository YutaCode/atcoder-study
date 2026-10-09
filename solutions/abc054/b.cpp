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

int main() {
	int n, m;
	cin >> n >> m;

	vector<string> a(n), b(m);
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];

	

	rep(i, n - m + 1)rep(j, n - m + 1) {
		bool is_true = true;
		rep(k, m) {
			if (a[i + k].substr(j, m) != b[k]) is_true = false;
		}
		if (is_true) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}