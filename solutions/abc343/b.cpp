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
#include <queue>
#include <climits>
#include <bitset>
#include <set>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(n));
	rep(i, n)rep(j, n) cin >> a[i][j];

	rep(i, n) {
		rep(j, n) {
			if (a[i][j] == 1) cout << j + 1 << ' ';
		}
		cout << endl;
	}
	return 0;
}