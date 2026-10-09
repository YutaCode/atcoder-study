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
	int n, m;
	cin >> n >> m;

	rep(i, m) {
		int a;
		cin >> a;
		n -= a;
	}

	cout << max(-1, n) << endl;
	return 0;
}