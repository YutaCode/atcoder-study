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

	for (int x = 0; x <= n; x++) {
		for (int y = 0; x + y <= n; y++) {
			for (int z = 0; x + y + z <= n; z++) {
				cout << x << " " << y << " " << z << endl;
			}
		}
	}
	return 0;
}