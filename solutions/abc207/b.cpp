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
	long long a, b, c, d;
	cin >> a >> b >> c >> d;

	long long x = c * d - b;

	if (x <= 0) cout << -1 << endl;
	else if (a % x == 0) cout << a / x << endl;
	else cout << a / x + 1 << endl;

	return 0;
}