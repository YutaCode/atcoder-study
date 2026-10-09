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
	int n;
	cin >> n;
	int m = 2025 - n;

	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			if (i * j == m) cout << i << " x " << j << endl;
		}
	}
	
	return 0;
}