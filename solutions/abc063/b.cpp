#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;

	int n = (int)s.size();
	map<char, int> c{};

	rep(i, n) {
		if (c.count(s[i])) {
			cout << "no" << endl;
			return 0;
		}
		c.insert(make_pair(s[i], i));
	}

	cout << "yes" << endl;
	return 0;
}