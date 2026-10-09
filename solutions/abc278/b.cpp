#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

bool difficult(int h, int m) {
	int a = h / 10;
	int b = h % 10;
	int c = m / 10;
	int d = m % 10;

	bool ans1 = (10 * a + b <= 23 && 10 * c + d <= 59);
	bool ans2 = (10 * a + c <= 23 && 10 * b + d <= 59);

	return (ans1 && ans2);
}

int main() {
	int h, m;
	cin >> h >> m;

	while (true) {
		if (difficult(h, m)) {
			printf("%d %d\n", h, m);
			return 0;
		}

		m = (m + 1) % 60;
		if (m == 0) h = (h + 1) % 24;
	}

	return 0;
}