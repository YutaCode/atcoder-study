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

int main() {
	int n;
	cin >> n;
	
	vector<int> l(n);
	rep(i, n) cin >> l[i];

	sort(l.begin(), l.end());
	int ans = 0;
	rep(i, n)rep(j, i)rep(k, j) {
		if (l[i] != l[j] && l[j] != l[k]) {
			if (l[j] + l[k] > l[i]) ans++;
		}
	}
	
	cout << ans << endl;
	return 0;
}