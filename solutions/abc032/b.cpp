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
	string s;
	int k;
	cin >> s >> k;

	map<string, int> p;

	int n = (int)s.size();

	rep(i, n - k + 1) {
		p.insert(make_pair(s.substr(i, k), 0));
	}

	cout << p.size() << endl;
	return 0;
}