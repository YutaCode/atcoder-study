#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int x;
	cin >> x;

	vector<int> b;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 2; j <= 1000; j++) {
			b.push_back((int)pow(i, j));
		}
	}

	while (x > 0) {
		if (find(b.begin(), b.end(), x) != b.end()) {
			cout << x << endl;
			return 0;
		}
		x--;
	}
}