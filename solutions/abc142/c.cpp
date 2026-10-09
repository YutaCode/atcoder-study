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

	vector<pair<int, int>> x;
	rep(i, n) {
		int a;
		cin >> a;
		x.push_back(make_pair(a, i + 1));
	}
	sort(x.begin(), x.end());

	rep(i, n) {
		cout << x[i].second << " ";
	}

	cout << endl;
	return 0;
}