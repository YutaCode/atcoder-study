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
	int n, l;
	cin >> n >> l;

	int ans = 0;
	rep(i, n) {
		int a;
		cin >> a;
		if (a >= l) ans++;
	}
	
	cout << ans << endl;
	return 0;
}