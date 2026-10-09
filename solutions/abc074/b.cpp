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

	int ans = 0; //ロボットの片道の移動距離を足していく
	rep(i, n) {
		int x;
		cin >> x;

		ans += min(x, k - x);
	}

	cout << 2 * ans << endl; //往復なので2倍
	return 0;
}