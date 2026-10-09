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
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	vector<ll> num(5, 0);
	for (string i : s) {
		if (i[0] == 'M') num[0]++;
		else if (i[0] == 'A') num[1]++;
		else if (i[0] == 'R') num[2]++;
		else if (i[0] == 'C') num[3]++;
		else if (i[0] == 'H') num[4]++;
	}

	vector<int> j = { 0, 1, 2, 3, 4 };
	ll ans = 0;
	rep(i, 5)rep(j, i)rep(k, j) ans += num[i] * num[j] * num[k];

	cout << ans << endl;
	return 0;
}