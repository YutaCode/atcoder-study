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
	int a, b, c;
	cin >> a >> b >> c;

	for (int i = 1; i <= 100; i++) {
		if ((b * i + c) % a == 0) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	return 0;
}