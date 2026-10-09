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
	int a, b, c, k;
	cin >> a >> b >> c >> k;

	if (k < a) {
		cout << k << endl;
		return 0;
	}
	else if (k <= a + b) {
		cout << a << endl;
		return 0;
	}
	else {
		cout << a - (k - a - b) << endl;
		return 0;
	}
}