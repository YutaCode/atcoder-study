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
	int a, b;
	cin >> a >> b;

	if (b == 1) {
		cout << 0 << endl;
		return 0;
	}
	int p = a;
	int cnt = 1;
	while (p < b) {
		p += a - 1;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}