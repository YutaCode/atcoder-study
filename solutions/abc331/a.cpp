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
	int M, D;
	cin >> M >> D;
	int y, m, d;
	cin >> y >> m >> d;

	if (d == D) {
		if (m == M) {
			cout << y + 1 << " " << 1 << " " << 1 << endl;
			return 0;
		}
		cout << y << " " << m + 1 << " " << 1 << endl;
		return 0;
	}

	cout << y << " " << m << " " << d + 1 << endl;
	return 0;
}