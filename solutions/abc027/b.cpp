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
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int sum = 0;
	rep(i, n) sum += a[i];
	if (sum % n != 0) {
		cout << -1 << endl;
		return 0;
	}
	int avg = sum / n;
	rep(i, n) a[i] -= avg;

	int len = 0;
	int cnt = 0;
	int ans = 0;
	rep(i, n) {
		len++;
		cnt += a[i];

		if (cnt == 0) {
			ans += (len - 1);
			len = 0;
		}
	}

	cout << ans << endl;
	return 0;
}