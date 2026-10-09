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
	map<string, int> p;
	rep(i, n) {
		string s;
		cin >> s;
		p[s]++;
	}

	int mx = -1;

	for (auto c : p) if (c.second > mx) mx = c.second;

	for (auto c : p) if (c.second == mx) cout << c.first << endl;
	return 0;
}