#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int r, d, x;
	cin >> r >> d >> x;

	rep(i, 10) {
		x = r * x - d;
		cout << x << endl;
	}
	return 0;
}