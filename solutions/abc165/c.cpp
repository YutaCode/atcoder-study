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

int n, m, q;
int ans = 0;
vector<int> a, b, c, d;

void func(vector<int> A) {
	if ((int)A.size() == n + 1) {
		int tmp = 0;
		rep(i, q) {
			if (A[b[i]] - A[a[i]] == c[i]) tmp += d[i];
		}
		ans = max(ans, tmp);
		return;
	}
	A.push_back(A.back());
	while (A.back() <= m) {
		func(A);
		A.back()++;
	}
}

int main() {
	cin >> n >> m >> q;
	a = b = c = d = vector<int>(q);
	rep(i, q) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}
	vector<int> A(1, 1);
	func(A);
	
	cout << ans << endl;
	return 0;
}