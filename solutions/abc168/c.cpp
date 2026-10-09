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
	int a, b, h, m;
	cin >> a >> b >> h >> m;

	int time = h * 60 + m;

	double ang1 = time * 0.5;
	double ang2 = m * 6.;

	double ang = min(abs(ang1 - ang2), 360. - abs(ang1 - ang2));

	double ans = a * a + b * b - 2 * a * b * cos(ang / 180. * M_PI);

	printf("%.10f\n", sqrt(ans));
	return 0;
}