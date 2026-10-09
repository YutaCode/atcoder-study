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
	vector<int> d(n);
	rep(i, n) cin >> d[i];
	sort(d.begin(), d.end());

	cout << d[n / 2] - d[n / 2 - 1] << endl;
	return 0;
}