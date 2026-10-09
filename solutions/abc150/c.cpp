#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];
	vector<int> q(n);
	rep(i, n) cin >> q[i];
	vector<int> per(n);
	rep(i, n) per[i] = i + 1;

	int a = 0, b = 0, cnt = 0;
	do {
		cnt++;
		if (per == p) a = cnt;
		if (per == q) b = cnt;
	} while (next_permutation(all(per)));
	
	cout << abs(a - b) << endl;
	return 0;
}