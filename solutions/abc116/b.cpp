#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int s;
	cin >> s;

	if (s == 1 || s == 2) {
		cout << 4 << endl;
		return 0;
	}

	int cnt = 0;
	while (s != 1) {
		if (s % 2 == 0) s /= 2;
		else s = 3 * s + 1;
		cnt++;
	}

	cout << cnt + 2 << endl;
	return 0;
}