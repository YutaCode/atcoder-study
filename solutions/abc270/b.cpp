#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int x, y, z;
	cin >> x >> y >> z;

	if (x * y < 0) cout << abs(x) << endl;
	else if (abs(x) < abs(y)) cout << abs(x) << endl;
	else if (z * y < 0) cout << 2 * abs(z) + abs(x) << endl;
	else if (abs(z) < abs(y)) cout << abs(x) << endl;
	else cout << -1 << endl;
	return 0;
}