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
	double a, b, d;
	cin >> a >> b >> d;

	double pi = 3.1415926535;
	double x = a * (double)cos(d / 180 * pi) - b * (double)sin(d / 180 * pi);
	double y = a * sin(d / 180 * pi) + b * cos(d / 180 * pi);

	cout << fixed << setprecision(10) << x << " " << y << endl;
  return 0;
}