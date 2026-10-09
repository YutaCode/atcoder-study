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
	int w, a, b;
	cin >> w >> a >> b;

	if (b - a > w) {
		cout << b - a - w << endl;
	}
	else if (a - b > w) {
		cout << a - b - w << endl;
	}
	else cout << 0 << endl;

	return 0;
}