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
	int n, k;
	cin >> n >> k;

	vector<vector<int>> t(n, vector<int>(n));
	rep(i, n)rep(j, n) cin >> t[i][j];

	vector<int> num;
	rep(i, n) num.push_back(i);
	num.push_back(0);


	int ans = 0;
	do {
		int time = 0;
		rep(i, n) {
			time += t[num[i]][num[i + 1]];
		}

		if (time == k) ans++;
	} while (next_permutation(num.begin() + 1, num.end() - 1));

	cout << ans << endl;
	return 0;
}