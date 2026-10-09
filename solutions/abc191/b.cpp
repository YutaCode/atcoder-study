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
	int n, x;
	cin >> n >> x;

	rep(i, n) {
		int a;
		cin >> a;

		if (a == x) continue;
		cout << a << " ";
	}
	cout << endl;
	return 0;
}