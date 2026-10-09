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
	int x, y, z;
	cin >> x >> y >> z;

	cout << (x - z) / (y + z) << endl;
	return 0;
}