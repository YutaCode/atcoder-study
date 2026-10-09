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
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int begin = max(a, c);
	int end = min(b, d);

	if (end - begin > 0) cout << end - begin << endl;
	else cout << 0 << endl;

	return 0;
}