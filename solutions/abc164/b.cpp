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
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	int takahashi = (c + b - 1) / b;
	int aoki = (a + d - 1) / d;

	if (takahashi <= aoki) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}