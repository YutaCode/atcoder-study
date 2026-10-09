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
	int n, l;
	cin >> n >> l;

	vector<string> s(n);
	rep(i, n) cin >> s[i];

	sort(s.begin(), s.end());

	rep(i, n) cout << s[i];
	cout << endl;
	return 0;
}