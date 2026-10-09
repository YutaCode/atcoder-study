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

	int ac = 0;
	vector<bool> a(n, false);
	vector<int> b(n, 0);
	rep(i, m) {
		int p;
		string s;
		cin >> p >> s;
		p--;
		if (a[p]) continue;

		if (s == "AC") {
			a[p] = true;
			ac++;
		}
		if (s == "WA") {
			b[p]++;
		}
	}
	int wa = 0;
	rep(i, n) {
		if (a[i]) wa += b[i];
	}

	cout << ac << " " << wa << endl;
	return 0;
}