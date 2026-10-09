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

int main() {
	double sx, sy, gx, gy;
	cin >> sx >> sy >> gx >> gy;

	cout << fixed << setprecision(10) << (gy * sx + sy * gx) / (sy + gy) << endl;

	return 0;
}