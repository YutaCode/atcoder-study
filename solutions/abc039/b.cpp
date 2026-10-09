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

	rep(i, 1000) {
		if (i * i * i * i == x) {
			cout << i << endl;
			return 0;
		}
	}
}