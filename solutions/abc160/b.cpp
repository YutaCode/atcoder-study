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
	int n;
	cin >> n;

	int ans = 0;
	while (n >= 500) {
		n -= 500;
		ans += 1000;
	}
	while (n >= 5) {
		n -= 5;
		ans += 5;
	}

	cout << ans << endl;
	return 0;
}