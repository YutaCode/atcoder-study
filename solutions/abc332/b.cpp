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
	int k, g, m;
	cin >> k >> g >> m;

	int gx = 0, mx = 0;
	
	rep(i, k) {
		int gn = gx, mn = mx;
		if (gx == g) {
			gx = 0;
			continue;
		}
		else if (mx == 0) {
			mx = m;
			continue;
		}
		else {
			if (mx >= g - gx) {
				gx += g - gn;
				mx -= (g - gn);
			}
			else {
				gx += mn;
				mx -= mn;
			}
		}
	}

	cout << gx << " " << mx << endl;
	return 0;
}