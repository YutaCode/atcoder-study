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
	ll n;
	cin >> n;
	vector<ll> kaibun(1, 0);
	for (ll i = 1; i * i * i <= n; i++) {
		string x = to_string(i * i * i);
		string y = x;
		reverse(y.begin(), y.end());
		if (x == y) kaibun.push_back(i * i * i);
	}

	auto it = upper_bound(kaibun.begin(), kaibun.end(), n);
	cout << *(it - 1) << endl;
	return 0;
}