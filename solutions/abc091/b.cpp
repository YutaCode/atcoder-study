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
	int n;
	cin >> n;
	map<string, int> a{};

	rep(i, n) {
		string s;
		cin >> s;

		a[s]++;
	}

	int m;
	cin >> m;

	rep(i, m) {
		string s;
		cin >> s;

		a[s]--;
	}

	int ans = -10000;
	for (auto i = a.begin(); i != a.end(); i++) {
		ans = max(ans, i->second);
	}

	cout << max(ans, 0) << endl;
	return 0;
}