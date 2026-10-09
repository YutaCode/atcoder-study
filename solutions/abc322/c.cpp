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
	int n, m;
	cin >> n >> m;

	vector<int> a(m);
	rep(i, m) cin >> a[i];
	
	for (int i = 1; i <= n; i++) {
		auto it = lower_bound(a.begin(), a.end(), i);
		cout << *it - i << endl;
	}
	return 0;
}