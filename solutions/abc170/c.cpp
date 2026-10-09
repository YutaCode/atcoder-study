#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int x, n;
	cin >> x >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];

	rep(i, 51) {
		int num1 = x - i;
		int num2 = x + i;

		if (find(p.begin(), p.end(), num1) == p.end()) {
			cout << num1 << endl;
			return 0;
		}
		if (find(p.begin(), p.end(), num2) == p.end()) {
			cout << num2 << endl;
			return 0;
		}
	}
}