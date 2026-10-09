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

	long long ans = max(max(a * c, a * d), max(b * c, b * d));

	cout << ans << endl;
	return 0;
}