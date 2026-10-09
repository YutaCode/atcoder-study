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
	int x, y;
	cin >> x >> y;

	if (y % 2 != 0) {
		cout << "No" << endl;
		return 0;
	}

	if (y < 2 * x || 4 * x < y) {
		cout << "No" << endl;
		return 0;
	}
	
	cout << "Yes" << endl;
	return 0;
}