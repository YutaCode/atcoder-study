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
	int a, b, k;
	cin >> a >> b >> k;

	if (k > (b - a) / 2) {
		for (int i = a; i <= b; i++) {
			cout << i << endl;
		}
		return 0;
	}

	else {
		for (int i = a; i < a + k; i++) {
			cout << i << endl;
		}
		for (int i = b - k + 1; i <= b; i++) {
			cout << i << endl;
		}
		return 0;
	}
}