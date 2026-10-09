#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int a, b;
	cin >> a >> b;

	rep(i, 1001) {
		if (i * 8 / 100 == a && i / 10 == b) {
			cout << i << endl;
			return 0;
		}
	}

	cout << -1 << endl;
	return 0;
}