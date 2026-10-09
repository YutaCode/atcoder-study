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
#include <queue>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	
	int ans1 = 0, ans2 = 0;

	rep(i, n) {
		int x, y;
		cin >> x >> y;

		ans1 += x;
		ans2 += y;
	}

	if (ans1 > ans2) cout << "Takahashi" << endl;
	else if (ans1 < ans2) cout << "Aoki" << endl;
	else cout << "Draw" << endl;
	return 0;
}