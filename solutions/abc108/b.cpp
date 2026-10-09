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
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x3, y3, x4, y4;

	x3 = x2 + y1 - y2;
	y3 = y2 - x1 + x2;
	x4 = x3 + y2 - y3;
	y4 = y3 - x2 + x3;

	printf("%d %d %d %d\n", x3, y3, x4, y4);
	return 0;
}