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

	for (int i = 1; i < n / 2; i++) {
		if (s.substr(0, n / 2 - i) == s.substr(n / 2 - i, n / 2 - i)) {
			cout << n - 2 * i << endl;
			return 0;
		}
	}
}