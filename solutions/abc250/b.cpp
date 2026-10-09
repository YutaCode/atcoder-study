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
	int n, a, b;
	cin >> n >> a >> b;

	string white, black;
	rep(i, b) {
		white += '.';
		black += '#';
	}

	rep(i, a * n) {
		bool p;
		if (i % (2 * a) < a) p = true;
		else p = false;

		rep(j, n) {
			if (p) cout << white;
			else cout << black;

			p = !p;
		}
		cout << endl;
	}
	return 0;
}