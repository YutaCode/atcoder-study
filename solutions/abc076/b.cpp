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
	int n, k;
	cin >> n >> k;

	int num = 1;
	rep(i, n) num = min(2 * num, num + k);

	cout << num << endl;
	return 0;
}